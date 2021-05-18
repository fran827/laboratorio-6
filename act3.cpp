#include <stdio.h>

int clave = 20778963;

int main(){
    printf("Ingrese su clave de acceso:\n");
    scanf("%d", &clave);
    
    if(clave == 20778963){
        printf("Bienvenido/a\n");
    }else{
        printf("ERROR, ingerese nuevamente su clave\n");
        scanf("%d", &clave);
        if(clave == 20778963){
            printf("Bienvenido/a\n");
            }else{
                printf("ERROR, ingrese nuevamente su clave\n");
                scanf("%d", &clave);
                if(clave == 20778963){
                printf("Bienvenido/a\n");
                }else{
                printf("Usuario bloqueado\n");
                
            }
        }
    }
    
    return 0;
}