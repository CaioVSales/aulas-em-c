int main(){
    int x, y;
    printf("Digite o valor de X: ");
    scanf("%f", &x);
    printf("Digite o valor de Y: ");
    scanf("%f", &y);

    if(x > y){
        printf("O valor de X e maior que de Y");
    }if (x < y){
        printf("O valor de Y e maior que de X");
    }if (x == y){
        printf("O valor de X e Y sao iguais!");
    }
}
