#include <stdio.h>

int numero;

int main(){
    printf("Ingrese un número:\n");
    scanf("%d", &numero);
    if (numero% 2 == 0){
        printf("Es par\n");
    } else {
        printf("Es impar\n");
    }

    return 0;
}