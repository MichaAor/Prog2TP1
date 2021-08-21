#include "Menu.h"

void ejecutarEj10(){
    int *a,ext;
    ext = pedirDimArr();
    a = (int*)malloc(sizeof(int) * ext);
    int val = cargaManual(a,ext);
    mostrarArreglo(a,val);
    resolverEj10(a,val);

}

void resolverEj10(int* a,int val){
    int min = a[0];
    int max = a[0];
    float prom = sumaCont(a,val) / val;
    for(int i =0;i<val;i++){
        if(a[i]>=max){
            max = a[i];
        }
        if(a[i]=<min){
            min = a[i];
        }
    }
printf("\nLos resultados son los siguientes:  [max = %d] [min=%d] [promedio=%f]",max,min,prom);
}
