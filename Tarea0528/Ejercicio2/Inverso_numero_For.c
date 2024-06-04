#include <stdio.h>

int main(){
    printf("Programa para obtener el inverso de un numero natural con For\n"); //Indico que tipo de programa estoy realizando
    int num,inum=0; //Defino variables
    long numero; //Defino variables
    printf("Escriba un numero para realizar el calculo\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numero); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    if (numero<0){ //Estructura Condicional Simple para que si el valor de numero fuera negativo pues que el programa no se ejecute
        printf("Ingresaste un numero negativo por lo cual no se va a ejecutar el programa\n");
        return 1;
    }
    for(int i=numero;i>0;i/=10){ /*Inicializo un numero al que necesite invertirlo, especifico que necesito que el bucle se detenga 
    si deja de ser mayor de 0, y que por cada iteracion se valla dividiendo para 10*/
        num=i%10; //En esta variable se guarda el residuo de dividirlo para 10, entonces el valor entero
        inum=inum*10+num; //En cada iteracion multiplico por 10 para que crezca en un digito e ir sumando el valor del residuo
    }
    printf("%d\n",inum); //Indico el numero inverso del numero que se proporciono al principio
    return 0;
}