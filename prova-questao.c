int main(){
    float numero;
    float fracionaria;
    int inteira;
    printf("Digite um valor: ");
    scanf("%f", &numero);

    inteira = numero;

    fracionaria = numero - inteira;
    if (fracionaria >= 0.5){
        inteira = inteira + 1;
    }else{
        inteira = inteira;
    }printf("%i", inteira);
}
