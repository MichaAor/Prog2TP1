#include "Menu.h"
#include "math.h"
#include "Ej1.h"
#include "Ej2.h"
#include "Ej3.h"
#include "Ej4.h"
#include "Ej6.h"
#include "Ej7.h"
#include "Ej8.h"


void ejecutarMenu(){
    int op;
    char rta;
    printf("/////Bienvenido al TRABAJO PRACTICO N1///// \n");
    do{
    system("cls");
    printf("--Seleccione un Ejercicio(Del 1 al 10)--\n");
    fflush(stdin);
    scanf("%d",&op);
    ejecutarEjercicios(op);
    printf("\n===============================================\n");
    rta = validacion();
    }while(rta == 's');

    printf("Gracias por ejecutar");
}

void ejecutarEjercicios(int op){
    char rta;
    printf("Desea ver la consigna del ejercicio seleccionado?\n");
    fflush(stdin);
    scanf("%c",&rta);
    if(rta == 's'){mostrarEjercicio(op);}
    printf("RESOLUCION: \n");
    switch(op){
        case 1:
            ejecutarEj1();
            break;
        case 2:
            ejecutarEj2();
            break;
        case 3:
            ejecutarEj3();
            break;
        case 4:
            ejecutarEj4();
            break;
        case 5:
           // ejecutarEj5();
            break;
        case 6:
           ejecutarEj6();
            break;
        case 7:
           ejecutarEj7();
            break;
        case 8:
           ejecutarEj8();
            break;
        case 9:
          //  ejecutarEj9();
            break;
        case 10:
          ejecutarEj10();
            break;
        default:
            printf("Ingreso una respuesta invalida");
            break;
    }
}

void mostrarEjercicio(int op){
    switch(op){
        case 1:
            printf("1.Se tiene un arreglo de números enteros positivos. Se desea obtener el promedio de sus valores. Para ello se debe:\na. Hacer una función que inicialice las celdas del arreglo en –1.\nb. Hacer una función que permita al usuario ingresar los valores. No se conoce la cantidad de antemano.\nc. Hacer una función que sume el contenido del arreglo y lo retorne.\nd. Hacer una función que cuente la cantidad de valores ingresados.\ne. Hacer una función que reciba como parámetro el arreglo ya cargado, calcule y retorne el valor promedio usando las funciones anteriores (c y d).\nf. Hacer la función main correspondiente.");
            break;
        case 2:
            printf("2.Invertir el contenido de un arreglo de caracteres. Para ello se debe modularizar de la siguiente forma:\na. Hacer una función para la carga del arreglo.\nb. Hacer una función para invertir el arreglo.\nc. Hacer una función para mostrar el contenido del arreglo.\nd. Hacer la función main con el menú correspondiente.");
            break;
        case 3:
            printf("3.Hacer una función que reciba como parámetro un arreglo de números enteros de un dígito y retorne el valor decimal de dicho número. Por ejemplo, un arreglo que tiene cargados los valores 3, 2, 8 y 9, la fn retorna el valor 3289.");
            break;
        case 4:
            printf("4.Hacer una función que retorne la posición del valor máximo de un arreglo de números enteros.");
            break;
        case 5:
            printf("5.Sea una matriz de números enteros, de dimensiones: 12 filas y 31 columnas. Contienen las precipitaciones correspondientes a un año entero. Las filas corresponden a los meses y las columnas a los días. Se pide:\na. Hacer una función para cargar la matriz de forma automática.\nb. Hacer una función que retorne el día de máxima precipitación para un mes determinado.\nc. Hacer una función que cargue en un arreglo de 12 posiciones el resultado de aplicar la fn anterior a cada mes de año.\nd. Hacer la función main con el menú correspondiente.");
            break;
        case 6:
            printf("6.Dada una cadena de caracteres, hacer una función que determine si dicha cadena es palíndromo (se lee de igual forma de adelante para atrás como viceversa) o no. La función recibe como parámetro la cadena y retorna 1 o 0 según sea la respuesta.");
            break;
        case 7:
            printf("7. Hacer una función que intercambie el contenido de dos variables. (pasaje de parámetros por referencia)");
            break;
        case 8:
            printf("8. Dados dos arreglos de números enteros ordenados de menor a mayor, hacer una función que los reciba como parámetros y retorne un tercer arreglo que contenga los datos de los arreglos anteriores, también ordenados. Se los debe intercalar.");
            break;
        case 9:
            printf("9. Dados dos arreglos paralelos, uno con apellidos y otro con edades. Se debe hacer un programa para encontrar el apellido de la persona de mayor edad. Se debe modularizar.");
            break;
        case 10:
            printf("10. Hacer una función que reciba como parámetros de entrada un arreglo de enteros y su dimensión, y tres parámetros de salida, tres números enteros que representen: valor máximo, valor mínimo y promedio. Se debe usar pasaje deparámetros por referencia.");
            break;
        default:
            printf("Ingreso una respuesta invalida");
            break;
    }
}
