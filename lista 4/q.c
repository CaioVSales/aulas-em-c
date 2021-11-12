int main(){
    int i;
    float nota, soma =0, media;

    for(i = 1; i <= 10; i++){
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);
        soma = soma + nota;
        printf("Soma = %f\n", soma);
    }
    media = soma / 10;
    printf("A media e igual a %f\n", media);

}
