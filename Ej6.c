#include "Menu.h"

void ejecutarEj6(){
    char *c;
    int ext;
    ext = pedirDimArr();
    c = (char*)malloc(sizeof(char) * ext);
    int val = cargaArrManChar(c,ext);
    mostrarArrChar(c,val);
    int rta = esPalindromoArr(c,val);
    if(rta == 1){
        printf("Es Palindromo");
    }else{
        printf("No es Palindromo");
    }
}

int esPalindromoArr(char*a,int val){
    int rta,j;
    char *b;

    for(int i = val-1;i>=0;i--){
        b[j] = a[i];
        j++;
    }
    for(int i = 0;i<val-1;i++){
       if(a[i] == b[(val -1) - i]){
         rta = 1;
       }else{
         rta = 0;
         return rta;
       }
    }
    return rta;
}
