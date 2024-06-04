#include <stdio.h>

int main(){
    printf("Programa para verificar si un numero es primo con Do While\n"); //Indico que tipo de programa estoy realizando
    int numero,conts,contn,aux=2; //Defino variables
    printf("Escriba el numero que desea verificar\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numero); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    if (numero<=0){ //Estructura Condicional Simple para que si numero sea menor o igual a 0, pues que no se ejecute el programa
        printf("El numero que ingresaste es negativo o es 0 por lo cual no va a funcionar el programa");
        return 1;
    } 
    do { //Estructuro mi bucle
        if(numero%aux!=0){ //Estructura Condicional Doble para que se sume 1 a cada variable para despues comprobar si es primo o no
            contn++;
        } else{
            conts++;
        }
        aux++; //Establezco que en cada iteracion a aux se le sume 1
    } while(aux<numero); //Establezco mi condicion para buscar que el bucle termine cuando el valor de aux sea mayor a numero
    if(contn!=0&&conts<1){ //Estructura Condicional Doble para indicar si el numero es primo o no
            printf("El numero que escribiste si es primo\n");
        } else{
            printf("El numero que escribiste no es primo\n");
        }
    return 0;
}