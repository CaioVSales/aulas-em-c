float media(int n){
    int vetor[10];
    float soma = 0 ;
    int i;
    for(i = 0; i < 10 ; i++){
        vetor[i] = (i + 1) * n;
    }
    for (i = 0 ; i < 10 ; i++){
        soma = soma + vetor[i];
    }
    return soma/10;
}

int main(){
    int n;
    float med;
    printf("Digite um valor para n: ");
    scanf("%d", &n);
    med = media(n);
    printf("%f\n", med);
}
