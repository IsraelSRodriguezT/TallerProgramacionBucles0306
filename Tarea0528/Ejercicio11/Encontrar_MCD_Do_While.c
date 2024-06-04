#include <stdio.h>

int main(){
    printf("Programa para encontrar el MCD de dos numeros naturales con Do While\n"); //Indico que tipo de programa estoy realizando
    int numero1,numero2,minimo,mcd,aux=1; //Defino variables
    printf("Ingresa un numero natural\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numero1); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    printf("Ingresa otro numero natural\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numero2); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    if(numero1<numero2){ //Estructura Condicional Doble para que se compare cual numero es el menor
        minimo=numero1;
    } else{
        minimo=numero2;
    }
    do{ //Estructuro mi bucle
        if (numero1%aux==0 && numero2%aux==0){ //Estructura Condicional Simple para comparar y en caso de ser cierto que se guarde aux
        mcd=aux; //Variable donde se guarda aux
        }
        aux++; //Establezco que en cada iteracion a aux se le sume 1
    } while(aux<minimo); //Establezco mi condicion para buscar que el bucle termine cuando el valor de aux sea mayor a minimo
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