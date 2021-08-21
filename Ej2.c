#include "Menu.h"



int cargaArrManChar(char*a,int ext){
    int val=0;
    char rta = 's';
    for(val;val<ext;val++){
        if(rta == 's'){
        printf("\nIngrese el caracter para la posicion %d del arreglo\n",val);
        fflush(stdin);
        scanf("%c",&a[val]);
        }else{
            return val;
        }
        rta = validacion();
    }
    return val;
}

void ejecutarEj2(){
    char *a;
    int ext;
    ext = pedirDimArr();
    a = (char*)malloc(sizeof(char) * ext);
    int val = cargaArrManChar(a,ext);
    invertirArr(a,val);
    printf("\n");
    mostrarArrChar(a,val);

}

void invertirArr(char*a,int val){
    char aux;
    mostrarArrChar(a,val);
    for(int i = 0;i<(val-1)-i;i++){
                aux = a[i];
                a[i] = a[(val-1)-i];
                a[(val-1)-i] = aux;
    }
}

void mostrarArrChar(char*a,int val){
    for(int i=0; i<val;i++){
            printf("-[%c]-",a[i]);
    }
}
