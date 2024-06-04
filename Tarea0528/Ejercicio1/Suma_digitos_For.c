#include <stdio.h>
int main (){
    printf("Programa para sumar los digitos de un numero natural con For\n"); //Indico que tipo de programa estoy realizando
    int aux=0,pdec=0; //Defino variables
    long numero; //Defino variables
    printf("Escriba un numero para realizar el calculo\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numero); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    if (numero<0){ //Estructura Condicional Simple para que si el valor de numero fuera negativo pues que el programa no se ejecute
        printf("Ingresaste un numero negativo por lo cual no se va a ejecutar el programa\n");
        return 1;
    }
    for (int i=numero;i>0;i/=10){ /*Inicializo i con el numero al que necesito que se sumen los digitos,
    busco que el bucle termine cuando el valor de i deje de ser mayor de 0, y que en cada iteracion i sea dividido para 10*/
        pdec= i%10; //En esta variable se guarda el residuo de dividirlo para 10, entonces el valor entero
        aux+=pdec; // En esta variable se va guardando y sumando cada residuo, para asi presentarlo al final  
        if (i<10){ //Estructura Condicional Doble para especificar cuando debe dejar de mostrarme al final el +
            printf("%d=",pdec);
        }else{
            printf("%d+",pdec);
        }
    }
    printf("%d\n",aux); //Indico la suma de los digitos del numero que utilize al principio
    return 0;
}