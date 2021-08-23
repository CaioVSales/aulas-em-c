#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero, resto;
    printf("Digite um valor: ");
    scanf("%i", &numero);

    resto = numero % 2;

    if(resto != 0){
        printf("O valor e impar!");
    }
    else{
        printf("O valor e par!");
    }
}
