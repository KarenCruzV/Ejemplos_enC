/*Nombre del programa: Imprimir un menú
  Autora: Cruz Varela Karen Guerlain
  Descripcion: el programa muestra un menú númerico de opciones, al elegir una opción, muestra 
               un mensaje indicando el número de opción seleccionado.
*/

/*Bibliotecas*/
#include <stdio.h>

/*Estructura main*/
int main(){
    
    /*Se declara el entero a utilizar para que el usuario ingrese una opcion del menu*/
    int opcion;

    /*Se elabora el menu*/
    printf("\tMENU\n\n");
    printf("1. Primera opción\n");
    printf("2. Segunda opción\n");
    printf("3. Tercera opción\n\n");
    /*printf("4. Salir\n");*/
    printf("Ingrese una opcion: ");

    /*Se lee la opción elegida*/
    scanf("%d", &opcion);
    
    /*El usuario elige la primera opción*/
    if(opcion == 1){
        printf("Has seleccionado la opción: 1\n");
    }

    /*El usuario elige la segunda opción*/
    if(opcion == 2){
        printf("Has seleccionado la opción: 2");
    }
    
    /*El usuario elige la tercera opción*/
    if(opcion == 3){
        printf("Has seleccionado la opción: 3");
    }
    
    /*El usuario elige la cuarta opción
    if(opcion == 4){
        return 0;
    }*/

    printf("\n\n");

    return 0;
}
