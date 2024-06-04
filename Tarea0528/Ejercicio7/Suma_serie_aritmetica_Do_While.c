#include <stdio.h>

int main(){
    printf("Programa para calcular la suma de los primeros n terminos de una serie aritmetica con Do While\n"); //Indico que tipo de programa estoy realizando
    int numeros,ptermino,snumeros,diferencia,aux=0; //Defino variables
    printf("Escribe cuantos terminos va a tener la serie aritmetica\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numeros); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    if (numeros<=0){ //Estructura Condicional Simple para que si numeros sea menor o igual a 0, pues que no se ejecute el programa
        printf("El numero que ingresaste es negativo o es 0 por lo cual no va a funcionar el programa");
        return 1;
    }
    printf("Escribe la diferencia que va a tener la serie entre sus terminos\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &diferencia); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    printf("Escribe el termino con el que va a empezar tu serie\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &ptermino); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    do { //Estructuro mi bucle
        if (aux==(numeros-1)){
            printf("%+d=", ptermino);
        } else{
            if(ptermino<0 || aux==0){
                printf("%d", ptermino);
            } else{
                printf("+%d", ptermino);
            }
        }
        snumeros+=ptermino; //Variable donde se guarda y se le suma el valor de ptermino
        ptermino+=diferencia; //Variable para cambiar el valor de ptermino sumandole la diferencia
        aux++; //Establezco que en cada iteracion a aux se le sume 1
    } while(aux<numeros); //Establezco mi condicion para buscar que el bucle termine cuando el valor de aux sea mayor a el valor de numeros
    printf("%d", snumeros);
    return 0;
}