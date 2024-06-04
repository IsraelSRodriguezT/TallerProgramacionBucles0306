#include <stdio.h>

int main(){
    printf("Programa para presentar n elementos de la serie de Fibonacci con For\n"); //Indico que tipo de programa estoy realizando
    int numeros,serie1=0,serie2=1; //Defino variables
    printf("Escriba cuantos elementos quiere que presente en la serie\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numeros); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    if (numeros<=0){ //Estructura Condicional Simple para que si numeros sea menor o igual a 0, pues que no se ejecute el programa
        printf("El numero que ingresaste es negativo o es 0 por lo cual no va a funcionar el programa");
        return 1;
    }
    printf("0,1,1,2,3,5,8,13\n"); //Indico ejemplo de referencia de como es la serie Fibonacci
    for (int i=0;i!=numeros;i++){ /*Inicilizo con i=0, luego busco que el bucle se repita mientras i sea diferente 
    del valor de numeros, y que en cada iteracion a i se le sume 1*/
        if(i<1){ /*Estructura Condicional Multiple para indicar que valores necesito indicar primero en la serie, 
        para que luego un numero sea el resultado de la suma de los 2 numeros anteriores*/  
            printf("%d,",serie1); //Indico Los primeros valores de la serie
            serie1+=serie2; //Le asigno a la variable que se sume con el valor inicial de serie2 
        }else{
            if(i==(numeros-1)){ //Estructura Condicional Doble que me permite indicar hasta cuando utilizo la ,
                printf("%d", serie2); //Indico el valor que se le valla asignando a serie 2 
                serie2+=serie1; //Le asigno a la variable que se sume con el valor de serie1 
            }else{
                printf("%d,",serie2); //Indico el valor que se le valla asignando a serie 2 
                serie2+=serie1; //Le asigno a la variable que se sume con el valor de serie1
            }
        }
        serie1=serie2-serie1; /*Le asigno a serie1 que sea la resta de serie2 con el valor de serie1, 
        para asi guardar el valor anterior y luego utilizaro en las sumas*/
    }
    return 0;
}