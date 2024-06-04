#include <stdio.h>

int main(){
    printf("Programa para calcular el factorial de un numero con Do While\n"); //Indico que tipo de programa estoy realizando
    int numero,resultado=1; //Defino variables
    printf("Escriba un numero para realizar el calculo\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numero); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    if (numero<=0){ //Estructura Condicional Simple para que si numero sea menor o igual a 0, pues que no se ejecute el programa
        printf("El numero que ingresaste es negativo o es 0 por lo cual no va a funcionar el programa");
        return 1;
    }
    printf("%d!=",numero); //Indico que tipo de calculo estoy realizando
    do { //Estructuro mi bucle
        if (numero==1){ //Estructura Condicional Doble para indicar cuando deberia dejar de presentarse el +
            printf("%d=",numero);
        } else {
            printf("%d*",numero);
        }
        resultado*=numero; //Variable donde se va a guardar las multiplicaciones por numero
        numero--; //Establezco que en cada iteracion a numero se le reste 1
    } while(numero>0); //Establezco mi condicion para buscar que el bucle termine cuando el valor de numero sea menor a 0
    printf("%d\n",resultado); //Indico el resultado del calculo realizada   
    return 0;
}