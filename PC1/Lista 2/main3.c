#include <stdio.h>

int main() {
    float salario, p_aumento, aumento, n_salario;
    printf("Informe o valor do salario\n");
    scanf("%f", &salario);
    printf("Informe o valor do aumento\n");
    scanf("%f", &p_aumento);
    aumento = salario * (p_aumento/100);
    n_salario = salario + aumento;
    printf("O aumento é de: %.2f\n", aumento);
    printf("O novo salario é: %.2f\n", n_salario);
    return 0;
}
