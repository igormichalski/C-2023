#include <stdlib.h>
#include <stdio.h>


int arq_caixa_banco(int caixa_banco)
{
   // Arquivo Binario (Valores caixa)
   FILE *arq;
   arq = fopen("caixabanco.dat", "wb");
   if (arq == NULL)
   {
      printf("Problema ao iniciar o caixa do banco\n");
      return 0;
   }
   fwrite(&caixa_banco, sizeof(int), 1, arq);
   fclose(arq);
}

//Função de incialização
void inicializar(int caixa_banco)
{
   arq_caixa_banco(caixa_banco);
}

// Função para validar o cpf do cliente
int validadecpf(long long int cpf)
{
   int N_cpf[11], primeiro_numero = 0, segundo_numero = 0;
   
   if (cpf == 0 || cpf>99999999999)
   {
      return 0;
   }

   if (cpf != 11111111111 || cpf !=22222222222 || cpf !=33333333333 || cpf !=44444444444 || cpf!=55555555555 || cpf!=66666666666 || cpf!=77777777777 || cpf!=88888888888 || cpf!=99999999999 || cpf!=00000000000)
   {
   // Separando os numeros do cpf
   N_cpf[0] = cpf / 10000000000;
   N_cpf[1] = (cpf / 1000000000) % 10;
   N_cpf[2] = (cpf / 100000000) % 10;
   N_cpf[3] = (cpf / 10000000) % 10;
   N_cpf[4] = (cpf / 1000000) % 10;
   N_cpf[5] = (cpf / 100000) % 10;
   N_cpf[6] = (cpf / 10000) % 10;
   N_cpf[7] = (cpf / 1000) % 10;
   N_cpf[8] = (cpf / 100) % 10;
   N_cpf[9] = (cpf / 10) % 10;
   N_cpf[10] = cpf % 10;

   // Primeiro numero validador
   for (int i = 0; i < 9; i++)
   {
      primeiro_numero = primeiro_numero + (N_cpf[i] * (10 - i));
   }
   primeiro_numero = primeiro_numero % 11;

   if ((primeiro_numero == 0) || (primeiro_numero == 1))
   {
      primeiro_numero = 0;
   }
   else
   {
      primeiro_numero = 11 - primeiro_numero;
   }

   // Segundo numero validador
   for (int i = 0; i < 10; i++)
   {
      segundo_numero = segundo_numero + (N_cpf[i] * (11 - i));
   }
   segundo_numero = segundo_numero % 11;

   if ((segundo_numero == 0) || (segundo_numero == 1))
   {
      segundo_numero = 0;
   }
   else
   {
      segundo_numero = 11 - segundo_numero;
   }

   // repasando valor de retorno
   if (primeiro_numero == N_cpf[9] && segundo_numero == N_cpf[10])
      return 1;
   else
      return 0;
   }
}

int main()
{
   // Variaveis
   int n_gerente, n_principal, retorno_cpf;
   int valor_saque, caixa_banco = 1000000, caixa_sacado = 0, caixa_reposto = 0, deposito_gerente;
   long long int cpf; 

   inicializar(caixa_banco);

   // Mensagem de apresentação
   printf("Seja Bem vindo!\n\n");


   // Looping do menu principal
   do
   {
      printf("MENU PRINCIPAL\n -Saque(1) \n -Gerente(2) \n -Finalizar(3) \n");
      scanf("%d", &n_principal);

      // validação de escolha menu pricipal
      if (n_principal == 1)
      {
         printf("Informe seu cpf (Somente numeros)\n");
         scanf("%lld", &cpf);

         // envio do cpf para a função e verificação da resposta
         retorno_cpf = validadecpf(cpf);
         system("cls");
         if (retorno_cpf == 1)
         {
            printf("Quanto deseja sacar?\n");
            scanf("%d", &valor_saque);
            if (valor_saque < caixa_banco)
            {
               caixa_sacado = caixa_sacado + valor_saque;
               caixa_banco = caixa_banco - valor_saque;
               arq_caixa_banco(caixa_banco);
               printf("Saque de R$%d realizado!\n", valor_saque);
            }
         }
         else
         {
            printf("Cpf invalido\n");
         }
         system("pause");
         system("cls");
      }
      if (n_principal == 2)
      {
         printf("MENU GERENTE\n -Valor total sacado(1) \n -Valor do saldo existente(2) \n -Abastecer o caixa eletronico(3) \n -Voltar ao menu principal(4)\n");
         scanf("%d", &n_gerente);
         system("cls");
         if (n_gerente == 1)
            printf("Valor total sacado em nosso banco foi de R$%d\n", caixa_sacado);
         if (n_gerente == 2)
         {

            // Lendo Arquivo Binario (Valores caixa)
            FILE *arq;
            arq = fopen("caixabanco.dat", "rb");
            if (arq == NULL)
            {
               printf("Problema ao ler o caixa do banco\n");
               return 0;
            }

            while(fread(&caixa_banco, sizeof(int), 1, arq))
            {
               printf("valor disponivel no banco: R$%d\n", caixa_banco);
            }
            fclose(arq);
         }
         if (n_gerente == 3)
         {
            printf("Deseja abastecer em quanto?\n");
            scanf("%d", &deposito_gerente);
            caixa_banco = caixa_banco + deposito_gerente;
            caixa_reposto = caixa_reposto + deposito_gerente;
         }

         system("pause");
         system("cls");
      }

   } while (n_principal != 3);
   return 0;
}
