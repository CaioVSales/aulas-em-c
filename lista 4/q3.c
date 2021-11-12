int main(){
    int numero, i, vetor[50], vetor2[50];
    printf("Digite um valor: ");
    scanf("%d", &numero);

    for(i = 0; i < 50; i++){
        vetor[i] = numero + numero * i;
        printf("[%d]", vetor[i]);
    }
    printf("\n\n");

    for(i = 0; i < 50; i++){
        vetor2[i] = 1000 - vetor[i];
        printf("[%d]", vetor2[i]);
    }

}
