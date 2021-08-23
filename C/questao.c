float resultado(int n){
    int vetor[10];
    int i;
    float soma;
    for(i = 0; i < 10; i++){
        vetor[i] = (i + 1) * n;

    }
    for(i = 0; i < 10; i++){
        soma = soma + vetor[i];
    }
    return soma/10;
}

int main(){
    int n;
    float media;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    media = resultado(n);
    printf("O resultado e %f:", media);
}
