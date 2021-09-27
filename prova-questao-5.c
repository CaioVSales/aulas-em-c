// 13.13
int main(){
    float numero, fracionaria, fracionaria2, fracionaria4, fracionaria5;
    int inteira, fracionaria3;
    printf("Digite um valor: ");
    scanf("%f", &numero);



// 13.17
// 0.17
// 1.7
// 0.7




    inteira = numero;
    // printf("%i\n", inteira);

    fracionaria = numero - inteira;
    // printf("%f\n", fracionaria);
    // fracionaria = 0.58 (8)

    fracionaria2 = fracionaria * 10;
    // printf("%f\n", fracionaria2);

    fracionaria3 = fracionaria2;
    // printf("%i\n", fracionaria3);
    // fracionaria2 - fracionaria3


    fracionaria4 = fracionaria2 - fracionaria3;
    // printf("%f\n", fracionaria4);
    fracionaria5 = fracionaria4 * 10 + 0.2;
    printf("%f\n", fracionaria5);



    if(fracionaria5 > 7){
        printf("O valor da segunda casa decimal e maior que 7");
    }if(fracionaria5 < 7){
        printf("O valor da segunda casa decimal e menor que 7");
    }if(fracionaria5 == 7){
        printf("O valor da segunda casa decimal e igual a 7");
    }
}
