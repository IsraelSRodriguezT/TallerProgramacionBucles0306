#include <stdio.h>

int main() {
    printf("Programa para calcular la raiz cubica de un numero utilizando restas sucesivas con While\n"); //Indico que tipo de programa estoy realizando
    double numero, raiz=0.0; //Defino variables
    printf("Escribe un numero entero al que le quieras sacar raiz cubica\n"); //Indico que el usuario ingrese un numero
    scanf("%lf", &numero); //Utilizo scanf %lf para que se pueda leer un valor numerico decimal desde el teclado
    if(numero>0){ //Estructura Condicional Simple para que de acuerdo a si fuera poristivo negativo, pues se le sumen o resten decimales
        while(raiz * raiz * raiz <= numero){ /*Establezco que el bucle termine si el resultado de multiplicar 3 veces raiz es 
        mayor o igual a numero*/
            raiz += 0.001; //Establezco que en cada iteracion a raiz se le sume 0.001
        }
        raiz -= 0.001; //Variable donde se le resta en decimal para ser un poco mas precisos con el resultado
    } else{
        while(raiz * raiz * raiz >= numero){ /*Establezco que el bucle termine si el resultado de multiplicar 3 veces raiz es 
        mayor o igual a numero*/
            raiz -= 0.001; //Establezco que en cada iteracion a raiz se le reste 0.001
        }
        raiz += 0.001; //Variable donde se le suma en decimal para ser un poco mas precisos con el resultado
    }
    printf("La raiz cubica de %.2lf es %.2lf\n", numero, raiz); //Indico el resultado del calculo realizado
    return 0;
}