int res(int n){
    int i;
    int array[10];
    float soma;
    float med;
    for(i = 0; i < 10 ; i++){
        int multi = n * i;
        soma = soma + multi;
        med = soma / 10;
    }
    printf("%f", med);

}

int main(){
    int n;
    printf("Digite um valor para n: ");
    scanf("%i", &n);
    res(n);
}
