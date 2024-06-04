#include <stdio.h>

int main(){
    printf("Programa para calcular la suma de los numeros pares desde 1 hasta n con While\n"); //Indico que tipo de programa estoy realizando
    int numeros,snumeros,aux=1; //Defino variables
    printf("Escribe hasta que numero quieres que se sumen los numeros pares\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numeros); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    if (numeros<=1){ //Estructura Condicional Simple para que si numeros sea menor o igual a 1, pues que no se ejecute el programa
        printf("El numero que ingresaste es menor a 1 por lo cual no va a funcionar el programa");
        return 1;
    }
    while (aux<=numeros){ //Establezco mi condicion para buscar que el bucle termine cuando el valor de aux sea mayor o igual a numeros
        if(aux%2==0){ //Estructura Condicional Multiple para indicar cuando deje de presentarse el +
            if (aux==(numeros-1)){
                printf("%d=", aux);
            }else if(numeros%2==0 && aux==numeros){ 
                printf("%d=", aux);
            }else{
                printf("%d+", aux);
            }
            snumeros+=aux; //Variable donde se guarda y sume el valor de i
        }
        aux++; //Establezco que en cada iteracion a aux se le sume 1
    }
    printf("%d", snumeros); //Indico el resultado del calculo realizado
    return 0;
}