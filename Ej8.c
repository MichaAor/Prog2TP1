#include "Menu.h"

int* ordSel(int*a,int val){
  int minimo=0,i,j;
  int aux;
  for(i=0 ; i<val-1 ; i++){
     minimo=i;
     for(j=i+1 ; j<val ; j++){
        if (a[minimo] > a[j]){
           minimo=j;
     aux=a[minimo];
     a[minimo]=a[i];
     a[i]=aux;
            }
        }
    }
    return a;
}

int* combinarArr(int*a,int*b,int val){
    int* comb = (int*)malloc(sizeof(int) * val);
    for(int i = 0;i<val;i++){
        for(int j = 0;j<val;j++){
            if(a[i]<b[i]){
                comb[i] = a[i];
            }
            if(a[i]>b[i]){
                comb[i] = b[i];
            }
            if(a[i] == b[i]){
                comb[i] = b[i];
                comb[i+1] = a[i];
                }
            }
    }
return comb;
}

void ejecutarEj8(){
    int *a,*b,extA,extB;
    extA = pedirDimArr();
    a = (int*)malloc(sizeof(int) * extA);
    int valA = cargaManual(a,extA);
    printf("\nSu primer array quedo de la siguiente manera ordenado de menor a mayor: \n");
    a = ordSel(a,valA);
    mostrarArreglo(a,valA);

    extB = pedirDimArr();
    b = (int*)malloc(sizeof(int) * extB);
    int valB = cargaManual(b,extB);
    printf("\nSu segundo array quedo de la siguiente manera ordenado de menor a mayor: \n");
    b = ordSel(b,valB);

    printf("\El array combinado y arreglado se ve de la siguiente manera ordenado de menor a mayor: \n");
    int*comb = combinarArr(a,b,valA+valB);
    mostrarArreglo(a,valA+valB);

}


