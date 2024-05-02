#include <stdio.h>

void invertir(int a, int b);

int main(){
    int numA, numB;
    printf("ingrese num A\n");
    scanf("%d", &numA);
    printf("ingrese num B\n");
    scanf("%d", &numB);
    printf("numero A ingresado = %d\n", numA);
    printf("numero B ingresado = %d\n", numB);

    invertir(numA, numB);

    
}

void invertir(int a, int b){
    int aux;
    aux = a;
    a = b;
    b = aux;

    printf("invertidos:\n");
    printf("numero A = %d\n", a);
    printf("numero B = %d\n", b);
}