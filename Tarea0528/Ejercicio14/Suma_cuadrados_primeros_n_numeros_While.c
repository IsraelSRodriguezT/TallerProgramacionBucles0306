#include <stdio.h>

int main(){
    printf("Programa para calcular la suma de los cuadrados de los primeros n numeros naturales con While\n"); //Indico que tipo de programa estoy realizando
    int numeros,snumeros,cuadrado,aux=1; //Defino variables
    printf("Escribe hasta que numero natural quieres que se sume\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numeros); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    if (numeros<=0){ //Estructura Condicional Simple para que si numeros sea menor o igual a 0, pues que no se ejecute el programa
        printf("El numero que ingresaste es negativo o es 0 por lo cual no va a funcionar el programa");
        return 1;
    }
    while(aux<=numeros){  //Establezco mi condicion para buscar que el bucle termine cuando el valor de aux sea mayor o igual a numeros
        if(aux==numeros){ //Estructura Condicional Doble para indicar hasta cuando se presente el +
            printf ("%d^2=", aux);
        } else{
            printf("%d^2+",aux);
        }
        cuadrado=(aux*aux); //Variable donde se guarda el cuadrado de aux
        snumeros+=cuadrado; //Variable donde se guarda y sume el valor de cuadrado
        aux++; //Establezco que en cada iteracion a aux se le sume 1
    }
    printf("%d", snumeros); //Indico el resultado del calculo realizado
    return 0;
}