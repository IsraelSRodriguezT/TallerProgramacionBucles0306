#include <stdio.h>

int main(){
    printf("Programa para contar el numero de digitos de un numero con For\n"); //Indico que tipo de programa estoy realizando
    int numero,aux; //Defino variables
    printf("Escriba un numero para realizar el conteo\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numero); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    if (numero<0){ //Estructura Condicional Simple para que si numero sea menor a 0, pues que no se ejecute el programa
        printf("El numero que ingresaste es negativo por lo cual no va a funcionar el programa");
        return 1;
    }
    for(int i=numero;i>0;i/=10){ /*Inicializo que i sea igual a numero, establezco que el bucle termine cuando i sea menor a 0,
    y que en cada iteracion i sea dividido para 10*/
        aux++; //Establezco que en cada iteracion a aux se le sume 1
    }
    printf("El numero que presentaste tiene %d digitos",aux); //Indico el resultado del conteo realizada 
    return 0;
}