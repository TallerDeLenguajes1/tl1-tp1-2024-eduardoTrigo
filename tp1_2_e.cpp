#include <stdio.h>

void ordenar(int a, int b);

int main()
{
    int numA, numB;
    printf("ingrese num A\n");
    scanf("%d", &numA);
    printf("ingrese num B\n");
    scanf("%d", &numB);

    ordenar(numA, numB);
}

void ordenar(int a, int b)
{
    if (a == b)
    {
        printf("---A y B son iguales---");
    }
    
    if (a > b)
    {
        int aux;
        aux = a;
        a = b;
        b = aux;
        printf("Ordenados");
        printf("num A = %d", a);
        printf("num B = %d", b);
    }else{
        printf("Ordenados");
        printf("num A = %d", a);
        printf("num B = %d", b);
    }
    
}