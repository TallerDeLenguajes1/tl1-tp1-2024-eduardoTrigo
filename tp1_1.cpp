#include <stdio.h>

int main()
{
    int *punt_result;
    int a = 1, b = 2;
    printf("HolaMundo\n");
    int result = a + b;
    punt_result = &result;
    printf("suma de %d + %d = %d \n", a, b, result);
    printf("El contenido del puntero %d \n", punt_result);
    printf("El contenido de la variable que apunta el puntero %d \n", *punt_result);
    printf("La direccion de memoria del puntero %p \n", &punt_result);
    printf("La direccion de memoria de la variable %d \n", &result);
    printf("El tamaño de memoria utilizado por esa variable: %zu bytes\n", sizeof(result));

    return 0;
}