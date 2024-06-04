#include <stdio.h>

int main(){
    printf("Programa para calcular el factorial de un numero con For\n"); //Indico que tipo de programa estoy realizando
    int numero,resultado=1; //Defino variables
    printf("Escriba un numero para realizar el calculo\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numero); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    if (numero<=0){ //Estructura Condicional Simple para que si numero sea menor o igual a 0, pues que no se ejecute el programa
        printf("El numero que ingresaste es negativo o es 0 por lo cual no va a funcionar el programa");
        return 1;
    }
    printf("%d!=",numero); //Indico que tipo de calculo estoy realizando
    for(int i=numero;i>0;i--){/*Iniciaizo que el valor de i sea igual al de numero, establezo que mi condicion pare el bucle si 
    i es mayor a 0, y que en cada iteracion a i se le reste 1*/
        if (i==1){ //Estructura Condicional Doble para indicar cuando deberia dejar de presentarse el +
            printf("%d=",i);
        } else {
            printf("%d*",i);
        }
        resultado*=i; //Variable donde se va a guardar las multiplicaciones por i
    }
    printf("%d\n",resultado); //Indico el resultado del calculo realizada   
    return 0;
}