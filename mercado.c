#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

struct produto
{
    char Nome[50];
    int codigo_produto;
    float valor_produto;
};
struct produto produto;


int produto_cadastrado(FILE *arq)
{
    printf("====Produtos Cadastrados====\n");
    arq = fopen("banco_produtos.bin", "rb");
    if (arq != NULL)
    {
        while (fread(&produto,sizeof(produto),1,arq))
        {
            printf("Nome Produto: %s", produto.Nome);
            printf("Codigo Produto: %d\n", produto.codigo_produto);
            printf("Valor Produto: R$%.2f\n", produto.valor_produto);
            printf("============================\n");
        }
        fclose(arq);
    }
    else
    {
        printf("Erro ao Abrir Arquivo\n");
    }
return 0;
}

float adicionar_produto(int codigo_produto, FILE *arq)
{
    float total = 0;
    int verificador=0;
    arq = fopen("banco_produtos.bin", "rb");
    if (arq != NULL)
    {
        while (fread(&produto,sizeof(produto),1,arq))
        {
            if (produto.codigo_produto == codigo_produto)
            {
                total = total + produto.valor_produto;
                printf("Produto Adicionado\n");
                verificador = 1;
            }
            }
        fclose(arq);
    }
    else
    {
        printf("Erro ao Abrir Arquivo\n");
    }
    if(verificador==0)
    {
        printf("Codigo Invalido!\n");
    }
    return total;
}

int stop_system(){
    srand(time(NULL));
    printf("VOCÊ ERROU A SENHA DE GERENTE 5 VEZES.\n");
    printf("System OuT (20 seconds)\n");
    sleep(20);
    return 2;
}

int main() {
    //Variaveis
    int menu = 1, menu_gerente, codigo_produto, senha_gerente, senha_gerente_true = 1234, erro_senha_gerente=0;
    float total_compra = 0;
    FILE *arq;
    //Rodar o menu principal ate o cliente encerrar
    do {
        //Entrada Menu
        printf("Mercado Michalski!\n- (1)Nova Compra\n- (2)Gerente\n- (0)Encerrar\n");
        scanf("%d", &menu);
        //Validação Menu
        if (menu < 0 || menu > 2) {
            printf("Infome um valor valido \n");
        } else {
            //Caminhos para a escolha do usuario
            switch (menu) {
                case (1):
                    produto_cadastrado(arq);
                    do {
                        printf("Total: R$%.2f\n", total_compra);
                        printf("Informe o codigo do Produto [(0)Encerrar]:\n");
                        scanf("%d", &codigo_produto);
                        total_compra = adicionar_produto(codigo_produto, arq) + total_compra;
                    } while (codigo_produto != 0);
                    break;
                case (2):
                    printf("Gerente\n (1)Cadastra Produto\n (2)Produtos Disponivel\n (3)Limpar Estoque\n (4)Trocar Senha\n (0)Voltar\n ");
                    scanf("%d", &menu_gerente);
                    switch (menu_gerente) {
                        case (1):
                            printf("Informe a senha de Gerente: \n");
                            scanf("%d", &senha_gerente);
                            if (senha_gerente==senha_gerente_true)
                            {
                                printf("Informe o Nome do Produto:\n");
                                __fpurge(stdin);
                                fgets(produto.Nome, 50, stdin);

                                printf("Informe o Codigo do Produto:\n");
                                scanf("%d", &produto.codigo_produto);

                                printf("Informe o Valor do Produto\n");
                                scanf("%f", &produto.valor_produto);

                                arq = fopen("banco_produtos.bin","ab");
                                if(arq != NULL)
                                {
                                    fwrite(&produto,sizeof(produto),1,arq);
                                }
                                else
                                {
                                    printf("Erro ao iniciar/criar Arq Binario\n");
                                }
                                fclose(arq);
                                printf("Produto Cadastrado!\n");
                            }
                            else
                            {
                                printf("Senha Incorreta!!\n");
                                erro_senha_gerente++;
                                if(erro_senha_gerente>=5)
                                    erro_senha_gerente = stop_system();
                            }
                            break;
                        case (2):
                            printf("Informe a senha de Gerente: \n");
                            scanf("%d", &senha_gerente);
                            if (senha_gerente==senha_gerente_true)
                            {
                                produto_cadastrado(arq);
                            }else{
                                printf("Senha Incorreta!!\n");
                                erro_senha_gerente++;
                                if(erro_senha_gerente>=5)
                                    erro_senha_gerente = stop_system();
                            }
                            break;
                        case(3):
                            printf("Informe a senha de Gerente: \n");
                            scanf("%d", &senha_gerente);
                            if (senha_gerente==senha_gerente_true)
                            {
                                remove("banco_produtos.bin");
                                printf("Estoque Removido!\n");
                            }
                            else{
                                printf("Senha Incorreta!!\n");
                                erro_senha_gerente++;
                                if(erro_senha_gerente>=5)
                                    erro_senha_gerente = stop_system();
                            }
                            break;
                        case(4):
                            printf("Informe a senha atual de Gerente: \n");
                            scanf("%d", &senha_gerente);
                            if(senha_gerente==senha_gerente_true)
                            {
                                printf("Informe a nova senha: \n");
                                scanf("%d", &senha_gerente_true);
                                    printf("Senha alterada!\n");
                            }else{
                                printf("Senha Incorreta!!\n");
                                erro_senha_gerente++;
                                if(erro_senha_gerente>=5)
                                    erro_senha_gerente = stop_system();
                            }
                            break;
                    }
                    }
        }
    }while(menu!=0); //Fim Menu
    return 0;
}
