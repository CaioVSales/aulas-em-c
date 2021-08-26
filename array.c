int reverte(int n){
    int numero, cifra;

    if (numero >= 0){
        do{
            cifra = numero % 10;
            printf("%i", cifra);
            numero /= 10;
        }while (numero !=0 );
        printf("\n");
    }
}

int main(){
    int resu;

    printf("Digite um numero inteiro: \n");
    scanf("%i", &numero);

    resu = reverte(n);
}
