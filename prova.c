int main(){
    int num, n1,n2,n3,n4;
    printf("Digite um valor: ");
    scanf("%d", &num);

    n1 = num / 1 % 10;
    n2 = num / 10 % 10;
    n3 = num / 100 % 10;
    n4 = num / 1000 % 10;

    printf("res %d", n1);
    printf("res %d", n2);
    printf("res %d", n3);
    printf("res %d", n4);
}
