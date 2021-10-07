int main(){
    int n;
    int i;
    float soma = 0;
    float den = 1;
    // s = 1/(1*1) - 1/(3*3) . . .
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        soma = soma - (1/(den*den));
        den = den + 2;
        if (i % 2 ==0){
            soma = soma - (1/(den*den));
        }else{
            soma = soma + (1/(den*den));
            }
    }
    printf("Soma: %f", soma);
}
