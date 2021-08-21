#include "Menu.h"

void ejecutarEj3(){
    int *a,ext;
    ext = pedirDimArr();
    a = (int*)malloc(sizeof(int) * ext);
    int val = cargaManual(a,ext);
    mostrarArreglo(a,val);
    int rta = retornarDecimal(a,val);
    printf("\nEl resultado decimal seria:  %d",rta);
}

int retornarDecimal(int*a,int val){
    int rta,i,j = val-1;
    for(int i =0;i<val;i++){
        rta = rta + a[i] * pow(10,j);
        j--;
    }
return rta;
}
