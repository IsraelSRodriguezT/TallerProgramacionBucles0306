#include <stdio.h>

int main(){
    printf("Programa para verificar si un numero es primo con For\n"); //Indico que tipo de programa estoy realizando
    int numero,conts,contn; //Defino variables
    printf("Escriba el numero que desea verificar\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numero); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    if (numero<=0){ //Estructura Condicional Simple para que si numero sea menor o igual a 0, pues que no se ejecute el programa
        printf("El numero que ingresaste es negativo o es 0 por lo cual no va a funcionar el programa");
        return 1;
    } 
    for(int i=2;i<numero;i++){/*Inicializo que i sea igual a 2, establezco que el bucle termine cuando i sea mayor a numero,
    y que en cada iteracion a i se le sume 1*/
        if(numero%i!=0){ //Estructura Condicional Doble para que se sume 1 a cada variable para despues comprobar si es primo o no
            contn++;
        } else{
            conts++;
        }
    }
    if(contn!=0&&conts<1){ //Estructura Condicional Doble para indicar si el numero es primo o no
            printf("El numero que escribiste si es primo\n");
        } else{
            printf("El numero que escribiste no es primo\n");
        }
    return 0;
}