int main(){
    int i;
    float notas, media, soma;
    for(i = 1; i <= 10; i++){
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &notas);
        soma = soma + notas;
        printf("Soma das notas = %f\n", soma);
    }
    media = soma / 10;
    printf("A media e igual a: %f", media);
}
