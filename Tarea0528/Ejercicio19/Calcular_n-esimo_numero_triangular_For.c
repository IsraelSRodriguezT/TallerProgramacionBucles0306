#include <stdio.h>

int main(){
    printf("Programa para calcular el n-esimo numero triangular con For\n"); //Indico que tipo de programa estoy realizando
    int numeros,snumeros; //Defino variables
    printf("Escribe hasta que numero quieres que se realice el calculo\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numeros); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    if (numeros<=0){ //Estructura Condicional Simple para que si numeros sea menor o igual a 0, pues que no se ejecute el programa
        printf("El numero que ingresaste es negativo o es 0 por lo cual no va a funcionar el programa");
        return 1;
    }
    for(int i=1;i<=numeros;i++){ /*Inicializo que i es igual a 1, establezco que el bucle termine cuando i sea mayor o igual a numeros,
    y que en cada iteracion a i se le sume 1*/
        snumeros+=i; //Variable donde se guarda y suma el valor de i
        if(i==numeros){ //Estructura Condicional Doble para saber hasta cuando presentar el +
            printf("%d=", i);
        } else {
            printf("%d+", i); 
        }
    }
    printf("%d", snumeros); //Indico el resultado del calculo realizado
    return 0;
}