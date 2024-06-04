#include <stdio.h>

int main(){
    printf("Programa para contar el numero de digitos de un numero con While\n"); //Indico que tipo de programa estoy realizando
    int numero,aux; //Defino variables
    printf("Escriba un numero para realizar el conteo\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numero); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    if (numero<0){ //Estructura Condicional Simple para que si numero sea menor a 0, pues que no se ejecute el programa
        printf("El numero que ingresaste es negativo por lo cual no va a funcionar el programa");
        return 1;
    }
    while(numero>0){ //Establezco mi condicion para buscar que el bucle termine cuando el valor de numero sea menor a 0
        aux++; //Establezco que en cada iteracion a aux se le sume 1
        numero/=10; //Establezco que en cada iteracion a numero se le divida para 10
    }
    printf("El numero que presentaste tiene %d digitos",aux); ///Indico el resultado del conteo realizada 
    return 0;
}