int main(){
    int n, i;
    int den = 1;
    int num = 2;
    float soma = num/den;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        den = den + 2;
        // while(den < n){
        //     den = den;
        //
        //     printf("Olha: %d\n", den);
        //      break;
        // }
        num = num + 2;
        soma = soma + (num/den);
        printf("Numerador: %d\n", num);
        printf("Denominador: %d\n", den);
    }
    printf("Soma: %f", soma);
}
