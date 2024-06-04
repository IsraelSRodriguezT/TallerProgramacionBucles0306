#include <stdio.h>

int main(){
    printf("Programa para calcular el producto de una serie de numeros fraccionarios con While\n"); //Indico que tipo de programa estoy realizando
    int numeros,aux=1; //Defino variable entera
    float snumeros=1.0; //Defino variable decimal
    printf("Escribe hasta que cantidad de numeros quieres que se multipliquen\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numeros); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    if (numeros<=0){ //Estructura Condicional Simple para que si numeros sea menor o igual a 0, pues que no se ejecute el programa
        printf("El numero que ingresaste es negativo o es 0 por lo cual no va a funcionar el programa");
        return 1;
    }
    while(aux<=numeros){ //Establezco mi condicion para buscar que el bucle termine cuando el valor de aux sea mayor o igual a numeros
        if(aux==numeros){ //Estructura Condicional Doble para saber hasta cuando presentar el *
            printf ("1/%d=", aux);
        } else{
            printf("1/%d*", aux);
        }
        snumeros*=(1.0/aux); //Variable donde se guarda y multiplica el valor de dividir 1 para aux
        aux++; //Establezco que en cada iteracion a aux se le sume 1
    }
    printf("%.4f",snumeros); //Indico el resultado del calculo realizado
    return 0;
}