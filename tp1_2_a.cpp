#include <stdio.h>

int cuadrado(int a);
void cuadradoVoid(int a);

int main(void)
{
    int num, resultado;
    printf("ingrese numero");
    scanf("%d", &num);

    resultado = cuadrado(num);
    cuadradoVoid(num);
    printf("el cuadrado de %d es %d.\n", num , resultado);
    return 0;
};

int cuadrado(int a)
{
    return (a * a);
}

void cuadradoVoid(int a){
    int resultado = a*a;
    printf("----el cuadrado de %d es %d-------\n", a, resultado);
}