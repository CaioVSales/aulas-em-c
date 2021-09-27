int main(){
    float SalLiq, Sal, Desc;
    printf("Digite o seu salario: ");
    scanf("%f", &Sal);
    printf("Digite o desconto do salario: ");
    scanf("%f", &Desc);
    SalLiq = Sal - Desc;
    printf("%f", SalLiq);
}
