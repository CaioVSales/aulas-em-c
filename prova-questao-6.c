int main() {
    // S = 7/3 + 5/13 + 7/23 + 5/33 + 7/43 + ...
    int n = 0;
    float num = 5;
    float den = 3;
    float soma;
    int i;
    printf(" Digite o valor para n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        den = den + 10;
        if (i == 0){
            den = 3;
        }
        if (num == 7){
            num = num - 2;
        }else{
            num = num + 2;
        }
        soma = soma + (num/den);
        // printf("%f", den);
        // printf("%f", num);
        printf(" [%f/%f]\n", num, den);
    }
    printf("\n Soma e igual a: %f\n", soma);
}
