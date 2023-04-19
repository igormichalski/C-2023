#include <stdio.h>

int main()
{
    int horas, minutos, segundos;
    scanf("%d %d %d",&horas, &minutos, &segundos);
    segundos = segundos + (minutos*60) + ((horas*60)*60);
    printf("%d",segundos);
    return 0;
}