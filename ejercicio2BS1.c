/*Nombre del programa: Operaciones Aritméticas Básicas (Sección 1)
  Autora: Cruz Varela Karen Guerlain
  Descripcion: el programa declara dos números (entero y decimal) y se les asigna un valor. Con  
               dichos valores, se realizan las operaciones: suma resta, multiplicación y división.
               Finalmente, se imprime el resultado de cada operación de manera ordenada.
*/

/*Bibliotecas*/
#include <stdio.h>

/*Estructura main*/
int main(){
    
    /*Se declara la variable de tipo entero y se le asigna un valor*/
    int numeroEntero = 20;

    /*Se declara la variable de tipo decimal y se le asigna un valor*/
    float numeroDecimal = 4.11;

    /*Se elabora la operación: suma*/
    float suma = numeroEntero + numeroDecimal;

    /*Se elabora la operación: resta*/
    float resta = numeroEntero - numeroDecimal;

    /*Se elabora la operación: multiplicación*/
    float multiplicacion = numeroEntero * numeroDecimal;

    /*Se elabora la operación: división*/
    float division = numeroEntero / numeroDecimal;

    /*Se imprimen los resultados de cada operación*/
    printf("Con los numeros %d y %f se realizaron las siguientes operaciones:", numeroEntero, numeroDecimal);
    printf("\n\n\tSuma: %d + %f = %f", numeroEntero, numeroDecimal, suma);
    printf("\n\tResta: %d - %f = %f", numeroEntero, numeroDecimal, resta);
    printf("\n\tMultiplicación: %d * %f = %f", numeroEntero, numeroDecimal, multiplicacion);
    printf("\n\tDivisión: %d / %f = %f", numeroEntero, numeroDecimal, division);
    printf("\n\n");
    
    return 0;
}
