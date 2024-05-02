#include <stdio.h>

int main(){

int var;
int *pvar;

var = 5;
pvar = &var;

printf("contenido de la variable %d\n" , *pvar);
printf("contenido del puntero %p\n", pvar);
printf("direccion de memoria de la variable %p\n", &var);

return 0;
}

