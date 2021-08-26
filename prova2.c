int r(int numero){
    int valor;
    // printf("Digite um numero inteiro: \n");
    // scanf("%i", &numero);

    if (numero >= 0){
        do{
            valor = numero % 10;
            printf("%i", valor);
            numero /= 10;
        }while (numero !=0 );
        // printf("\n");
    }
}
int main(){
    int numero, a;
    printf("Digite um numero inteiro: \n");
    scanf("%i", &numero);
    a = r(numero);
    printf("%i", a);
}
