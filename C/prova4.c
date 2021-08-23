#include <stdio.h>
int main() {
//Criando os vetores necessários
    int vet[8], v2[8];
    int ve[2];
    int v[4];
    int i;
    //Aqui fiz um loop for para pegar os 8 valores do meu vetor principal
    for(i = 0; i < 8; i++) {
        printf("Digite um numero!\n");
        scanf("%i", &vet[i]);
    }
    //Em seguida fiz outro loop for para que eu conseguisse inverter todo o vetor
    for(i = 0; i < 8; i++) {
        v2[i] = vet[8-i-1];
        printf("V:\n ");
        printf("%i\n", v2[i]);
    }
    /* Tentativas de inverter as casas 2 em 2:
    for(i = 0; i < 2; i++){
      ve[i] = vet[2-i-1];
      printf("[%i]\n", ve[i]);
    }
    for(i = 0; i < 8; i++){
      v[i] = ve[4+i-1];
      printf("[%i]\n", v[i]);
    }*/
}
