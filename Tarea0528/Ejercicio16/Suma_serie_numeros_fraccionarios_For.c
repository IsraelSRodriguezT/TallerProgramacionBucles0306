#include <stdio.h>

int main(){
    printf("Programa para calcular la suma de una serie de numeros fraccionarios con For\n"); //Indico que tipo de programa estoy realizando
    int numeros; //Defino variable entera
    float snumeros=0.0; //Defino variable decimal
    printf("Escribe hasta que cantidad de numeros quieres que se sumen\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numeros); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    if (numeros<=0){ //Estructura Condicional Simple para que si numeros sea menor o igual a 0, pues que no se ejecute el programa
        printf("El numero que ingresaste es negativo o es 0 por lo cual no va a funcionar el programa");
        return 1;
    }
    for(int i=1;i<=numeros;i++){ /*Inicializo que i sea igual a 1, establezco que el bucle termine cuando i sea mayor o igual a numeros,
    y que en cada iteracion a i se le sume 1*/
        if(i==numeros){ //Estructura Condicional Doble para saber hasta cuando presentar el +
            printf ("1/%d=", i);
        } else{
            printf("1/%d+", i);
        }
        snumeros+=(1.0/i); //Variable donde se guarda y suma el valor de dividir 1 para i
    }
    printf("%.4f",snumeros); //Indico el resultado del calculo realizado
    return 0;
}