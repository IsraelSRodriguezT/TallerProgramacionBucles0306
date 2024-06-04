#include <stdio.h>

int main(){
    printf("Programa para calcular la suma de los factoriales de los primeros n numeros con For\n"); //Indico que tipo de programa estoy realizando
    int numero,snumero=0; //Defino variables
    printf("Escriba un numero para realizar el calculo\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numero); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    if (numero<=0){ //Estructura Condicional Simple para que si numero sea menor o igual a 0, pues que no se ejecute el programa
        printf("El numero que ingresaste es negativo o es 0 por lo cual no va a funcionar el programa");
        return 1;
    }
    int cantidad[numero]; //Defino un arreglo
    for(int sum=1;sum<=numero;sum++){ /*Inicializo que sum sea igual a 1, establezco que el bucle termine cuando sum sea mayor o igual 
    a numero, y que en cada iteracion a sum se le sume 1*/
        int resultado=1; //Defino variable para que se reinicie en cada iteracion
        if(sum==numero){ //Estructura Condicional Doble para saber hasta cuando presentar el +
            printf("%d!=", sum);
        } else{
            printf("%d!+", sum); 
        }
        for(int fact=1;fact<=sum;fact++){ /*Inicializo que fact sea igual a 1, establezco que el bucle termine cuando fact sea mayor 
        o igual a sum, y que en cada iteracion a fact se le sume 1*/
            resultado*=fact; //Variable donde se guarda y multiplica en cada iteracion por fact
        }
        cantidad[sum-1]=resultado; //Establezco que en cada iteracion al arreglo se le valla asignando el valor de resultado
        snumero+=resultado; //Variable donde se guarda y suma el resultado
    }
    for (int i=0;i<numero;i++){ /*Inicializo que fact sea igual a 1, establezco que el bucle termine cuando fact sea mayor 
        o igual a sum, y que en cada iteracion a fact se le sume 1*/
        if(i==(numero-1)){ //Estructura Condicional Doble para saber hasta cuando presentar el +
            printf("%d=", cantidad[i]);
        } else{
            printf("%d+", cantidad[i]); 
        }
    }
    printf("%d", snumero); //Indico el resultado del calculo realizado
    return 0;
}