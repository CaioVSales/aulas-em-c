//Criei a função que receberá o vetor
int valor(int n){
    // Criei as variáveis necessárias
    int array[10];
    int i;
    float soma = 0;
    float med;
    //Fiz um único laço imendado que irá calcular a multiplicação do termo com os 10 primeiros múltiplos e somar todos os valores resultantes da multiplicação
    for (i = 1 ; i < 11 ; i++){
        int mult = n * i;
        //printf("Valor %d: %d\n", i, mult);
        soma = soma + mult;
        }
        //Aqui criei a média da minha soma dividindo pelo número total de múltiplos
        med = soma / 10;
        printf("A media e igual a: %f", med);
    }

//A função principal, que irá pedir o valor do termo "n" e irá ler o valor digitado pelo usuário.
int main(){
    int n;
    printf("Digite um valor para n: ");
    scanf("%d", &n);
//Aqui estou chamando a função que criei pro vetor, nas primeiras linhas.
valor(n);

}
