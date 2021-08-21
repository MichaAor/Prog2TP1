#include "Menu.h"

void ejecutarEj4(){
    int *a,ext;
    ext = pedirDimArr();
    a = (int*)malloc(sizeof(int) * ext);
    int val = cargaManual(a,ext);
    mostrarArreglo(a,val);
    int rta = encontrarPosMax(a,val);
    printf("\nEl valor maximo del arreglo es %d y su posicion es %d",a[rta],rta);
}

int encontrarPosMax(int*a,int val){
    int max=a[0],seg = 0;
    for(int i=1;i<val;i++){
      if(a[i] > max){
        max = a[i];
        seg = i;
      }
    }
return seg;
}
