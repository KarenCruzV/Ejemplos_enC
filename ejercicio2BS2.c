/*Nombre del programa: Operaciones Aritméticas Básicas (Sección 2)
  Autora: Cruz Varela Karen Guerlain
  Descripcion: el programa declara dos números (entero y decimal) y el usuario se encarga de asignar 
               un valor a cada número. Con dichos valores, se realizan las operaciones: suma resta, 
               multiplicación y división. Finalmente, se imprime el resultado de cada operación de 
               manera ordenada.
*/

/*Bibliotecas*/
#include <stdio.h>

/*Estructura main*/
int main(){
    
    /*Se declara la variable de tipo entero*/
    int numeroEntero;

    /*Se declara la variable de tipo decimal*/
    float numeroDecimal;

    /*Se lee el valor ingresado por el usuario para la variable de tipo entero*/
    printf("Proporciona el valor para el número entero: ");
    scanf("%d", &numeroEntero);
    printf("\n");

    /*Se lee el valor ingresado por el usuario para la variable de tipo decimal*/
    printf("Proporciona el valor para el número decimal: ");
    scanf("%f", &numeroDecimal);
    printf("\n");

    printf("Con los numeros %d y %f se realizaron las siguientes operaciones:", numeroEntero, numeroDecimal);

    /*Se elabora la operación: suma*/
    float suma = numeroEntero + numeroDecimal;

    /*Se imprime el resultado de la suma*/
    printf("\n\n\tSuma: %d + %f = %f", numeroEntero, numeroDecimal, suma);

    /*Se elabora la operación: resta*/
    float resta = numeroEntero - numeroDecimal;

    /*Se imprime el resultado de la resta*/
    printf("\n\tResta: %d - %f = %f", numeroEntero, numeroDecimal, resta);

    /*Se elabora la operación: multiplicación*/
    float multiplicacion = numeroEntero * numeroDecimal;

    /*Se imprime el resultado de la multiplicación*/
    printf("\n\tMultiplicación: %d * %f = %f", numeroEntero, numeroDecimal, multiplicacion);

    /*Se elabora la operación: división*/
    /*Dependiendo del caso, se imprime el resultado de la división*/
    float division;
    if(numeroEntero == 0){
        division = 0;
        printf("\n\tDivisión: %d / %f = %f", numeroEntero, numeroDecimal, division);
    }
    else if(numeroDecimal == 0){
        printf("\n\tDivisión: %d / %f = No se puede dividir por 0", numeroEntero, numeroDecimal );
    }
    else{
        division = numeroEntero / numeroDecimal;
        printf("\n\tDivisión: %d / %f = %f", numeroEntero, numeroDecimal, division);
    }
    
    printf("\n\n");
    
    return 0;
}
