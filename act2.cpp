#include <stdio.h>

int numero1;
int numero2;
int numero3;

int main(){
    printf("Ingrese el primer número:\n");
    scanf("%d", &numero1);
    printf("Ingrese el segundo número:\n");
    scanf("%d", &numero2);
    printf("Ingrese el tercer número:\n");
    scanf("%d", &numero3);

    if(numero1 > numero2 && numero1 > numero3){
        printf("El primer número es mayor\n");
    } else if(numero2 > numero1 && numero2 > numero3){
        printf("El segundo número es mayor\n");
    } else if(numero3 > numero1 && numero3 > numero2){
        printf("El tercer número es mayor\n");
    } else {
        printf("Los tres numeros son iguales\n");
    }

    return 0;
}