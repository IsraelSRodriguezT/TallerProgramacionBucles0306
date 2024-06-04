#include <stdio.h>

int main(){
    printf("Programa para calcular la suma de los factoriales de los primeros n numeros con While\n"); //Indico que tipo de programa estoy realizando
    int numero,snumero=0,sum=1,aux=0; //Defino variables
    printf("Escriba un numero para realizar el calculo\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numero); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    if (numero<=0){ //Estructura Condicional Simple para que si numero sea menor o igual a 0, pues que no se ejecute el programa
        printf("El numero que ingresaste es negativo o es 0 por lo cual no va a funcionar el programa");
        return 1;
    }
    int cantidad[numero]; //Defino un arreglo
    while(sum<=numero){ //Establezco mi condicion para buscar que el bucle termine cuando el valor de sum sea mayor o igual a numero
        int resultado=1; //Defino variable para que se reinicie en cada iteracion
        if(sum==numero){ //Estructura Condicional Doble para saber hasta cuando presentar el +
            printf("%d!=", sum);
        } else{
            printf("%d!+", sum); 
        }
        int fact=1; //Defino variable para que se reinicie en cada iteracion
        while(fact<=sum){ //Establezco mi condicion para buscar que el bucle termine cuando el valor de fact sea mayor o igual a sum
            resultado*=fact; //Variable donde se guarda y multiplica en cada iteracion por fact
            fact++; //Establezco que en cada iteracion a fact se le sume 1
        }
        cantidad[sum-1]=resultado; //Establezco que en cada iteracion al arreglo se le valla asignando el valor de resultado
        snumero+=resultado; //Variable donde se guarda y suma el resultado
        sum++; //Establezco que en cada iteracion a sum se le sume 1
    }
    while(aux<numero){ //Establezco mi condicion para buscar que el bucle termine cuando el valor de aux sea mayor a numero
        if(aux==(numero-1)){ //Estructura Condicional Doble para saber hasta cuando presentar el +
            printf("%d=", cantidad[aux]);
        } else{
            printf("%d+", cantidad[aux]); 
        }
        aux++; //Establezco que en cada iteracion a aux se le sume 1
    }
    printf("%d", snumero); //Indico el resultado del calculo realizado
    return 0;
}