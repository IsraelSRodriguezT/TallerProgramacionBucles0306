#include <stdio.h>

int main(){
    printf("Programa para calcular el n-esimo numero triangular con Do While\n"); //Indico que tipo de programa estoy realizando
    int numeros,snumeros,aux=1; //Defino variables
    printf("Escribe hasta que numero quieres que se realice el calculo\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numeros); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    if (numeros<=0){ //Estructura Condicional Simple para que si numeros sea menor o igual a 0, pues que no se ejecute el programa
        printf("El numero que ingresaste es negativo o es 0 por lo cual no va a funcionar el programa");
        return 1;
    }
    do{ //Estructuro mi bucle
        snumeros+=aux; //Variable donde se guarda y suma el valor de aux
        if(aux==numeros){ //Estructura Condicional Doble para saber hasta cuando presentar el +
            printf("%d=", aux);
        } else {
            printf("%d+", aux); 
        }
        aux++; //Establezco que en cada iteracion a aux se le sume 1
    } while(aux<=numeros); //Establezco mi condicion para buscar que el bucle termine cuando el valor de aux sea mayor o igual a numeros
    printf("%d", snumeros); //Indico el resultado del calculo realizado
    return 0;
}