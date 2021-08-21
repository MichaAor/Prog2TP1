#include "Menu.h"

void ejecutarEj7(){
    int a = 5,b = 8;
    intercambiarValores(a,b);
}

void intercambiarValores(int*a,int*b){
    printf("\nLos valores son a = %d, b = %d",a,b);
    int aux = a;
    a = b;
    b = aux;
    printf("\nResultado es: a = %d, b = %d",a,b);
}
