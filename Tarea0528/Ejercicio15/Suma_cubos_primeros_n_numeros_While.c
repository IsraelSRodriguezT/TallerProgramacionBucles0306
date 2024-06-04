#include <stdio.h>

int main(){
    printf("Programa para calcular la suma de los cubos de los primeros n numeros naturales con While\n"); //Indico que tipo de programa estoy realizando
    int numeros,snumeros,cubo,aux=1; //Defino variables
    printf("Escribe hasta que numero natural quieres que se sume\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numeros); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    if (numeros<=0){ //Estructura Condicional Simple para que si numeros sea menor o igual a 0, pues que no se ejecute el programa
        printf("El numero que ingresaste es negativo o es 0 por lo cual no va a funcionar el programa");
        return 1;
    }
    while(aux<=numeros){ //Establezco mi condicion para buscar que el bucle termine cuando el valor de aux sea mayor o igual a numeros
        if(aux==numeros){ //Estructura Condicional Doble para saber cuando se deja de presentar el +
            printf ("%d^3=", aux);
        } else{
            printf("%d^3+",aux);
        }
        cubo=(aux*aux*aux); //Variable donde se guarda el cubo de aux
        snumeros+=cubo; //Variable donde se guarda y suma el valor de cubo
        aux++; //Establezco que en cada iteracion a aux se le sume 1
    }
    printf("%d", snumeros); //Indico el resultado del calculo realizado
    return 0;
}