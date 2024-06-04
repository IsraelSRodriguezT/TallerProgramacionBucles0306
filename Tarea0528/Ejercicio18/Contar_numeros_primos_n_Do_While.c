#include <stdio.h>

int main(){
    printf("Programa para contar cuantos numeros primos hay desde 1 hasta n con Do While\n"); //Indico que tipo de programa estoy realizando
    int numeros,cont,numerador=1; //Defino variables
    printf("Escribe hasta que numero quieres que se presenten los numeros primos\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numeros); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    if (numeros<=0){ //Estructura Condicional Simple para que si numeros sea menor o igual a 0, pues que no se ejecute el programa
        printf("El numero que ingresaste es negativo o es 0 por lo cual no va a funcionar el programa");
        return 1;
    }
    do{ //Estructuro mi bucle
        int contp=0,denominador=1; //Defino variables para que se reinicie en cada iteracion
        do{
            if(numerador%denominador==0){ //Estructura Condicional Simple para que se contee cuando sea numero primo
                contp++; //Establezco que en cada iteracion a contp se le sume 1
            }
            denominador++; //Establezco que en cada iteracion a denominador se le sume 1
        } while(denominador<=numerador); /*Establezco mi condicion para buscar que el bucle termine cuando el valor de denominador sea 
        mayor o igual a numerador*/
        if(contp==2){ //Estructura Condicional Multiple para presentar la secuencia de numeros primos dentro de []
            if (numerador==2){
                printf("[%d", numerador);
            } else{
                printf(",%d", numerador);
            }
            cont++; //Establezco que en cada iteracion a cont se le sume 1
        } else if (numeros==1){
            printf("[");
        }
        numerador++; //Establezco que en cada iteracion a numerador se le sume 1
    } while(numerador<=numeros); /*Establezco mi condicion para buscar que el bucle termine cuando el valor de numerador 
    sea mayor o igual a numeros*/
    printf("]\n"); //Para cerrar el []
    printf("Hasta %d hay %d numeros primos", numeros,cont); //Indico el resultado del calculo realizado
    return 0;
}