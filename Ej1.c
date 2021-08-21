#include "Menu.h"

char validacion(){
    char rta;
    printf("Desea seguir? s/n   \n");
    fflush(stdin);
    scanf("%c",&rta);
return rta;
}


int pedirDimArr(){
    int cant;
    printf("\nIngrese el tamaño del arreglo\n");
    fflush(stdin);
    scanf("%d",&cant);
return cant;
}

void inicializarArreglo(int*a,int val){
    int i =0;
    while(i<val){
        a[i] = -1;
        i++;
    }
}

void mostrarArreglo(int*a,int val){
    for(int i=0; i<val;i++){
            printf("-[%d]-",a[i]);
    }
}

int sumaCont(int*a,int val){
    int suma = 0;
    for(int i = 0;i<val;i++){
        suma = suma + a[i];
    }
return suma;
}

int cargaManual(int*a,int ext){
int val=0;
char rta = 's';
    for(val;val<ext;val++){
        if(rta == 's'){
        printf("\nIngrese el valor para la posicion %d del arreglo\n",val);
        fflush(stdin);
        scanf("%d",&a[val]);
        }else{
            return val;
        }
        rta = validacion();
    }
    return val;
}

void mostrarEj1(int*a,int val,int suma,float promedio){
    printf("\nResultados del Ejercicio 1 \n");
    mostrarArreglo(a,val);
    printf("\nLa CANTIDAD de datos que posee el arreglo es de %d \n",val);
    printf("La SUMA de los datos que posee el arreglo es de %d \n",suma);
    printf("El PROMEDIO de datos que posee el arreglo es de %.2f \n",promedio);
}

void ejecutarEj1(){
    int *a,ext;
    ext = pedirDimArr();
    a = (int*)malloc(sizeof(int) * ext);
    inicializarArreglo(a,ext);
    printf("Arreglo Inicializado en -1 \n");
    mostrarArreglo(a,ext);
    int val = cargaManual(a,ext);
    float suma = sumaCont(a,val);
    float prom = (float)suma / val;
    mostrarEj1(a,val,suma,prom);
}
