#include <stdio.h>

int main(){
    printf("Programa para encontrar el MCD de dos numeros naturales con For\n"); //Indico que tipo de programa estoy realizando
    int numero1,numero2,minimo,mcd; //Defino variables
    printf("Ingresa un numero natural\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numero1); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    printf("Ingresa otro numero natural\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numero2); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    if(numero1<numero2){ //Estructura Condicional Doble para que se compare cual numero es el menor
        minimo=numero1;
    } else{
        minimo=numero2;
    }
    for(int i=1;i<minimo;i++){/*Inicializo que i sea igual a 1, establezco que el bucle termine cuando i sea mayor minimo,
    y que en cada iteracion a i se le sume 1*/
        if (numero1%i==0 && numero2%i==0){ //Estructura Condicional Simple para comparar y en caso de ser cierto que se guarde i
        mcd=i; //Variable donde se guarda i 
        }
    } 
    if (numero1==0){ //Estructura Condicional Multiple en caso de si el valor de numero fuera 0 pues que presente como mcd el otro numero
        mcd=numero2;
    } else if (numero2==0){
        mcd=numero1;
    }
    if (numero1==1){ //Estructura Condicional Multiple en caso de si el valor de numero fuera 1 pues que presente como mcd el mismo numero
        mcd=numero1;
    } else if (numero2==1){
        mcd=numero2;
    }
    printf("El MCD de %d y %d es: %d", numero1,numero2,mcd); //Indico el resultado del calculo realizada 
    return 0;
}
