// Matricula: 2110068
// Nome: Caio Victor Sales de Freitas


// 13.13
int main(){
    float numero, fracionaria, fracionaria2, fracionaria4, fracionaria5, fracionaria6;
    int inteira, fracionaria3;
    printf("Digite um valor: ");
    scanf("%f", &numero);


    inteira = numero;
    printf("%i\n", inteira);

    fracionaria = numero - inteira;
    printf("%f\n", fracionaria);
    // fracionaria = 0.58 (8)

    fracionaria2 = fracionaria * 0.10;
    fracionaria5 = fracionaria2 * 10;
    fracionaria6 = fracionaria5 * 10;
    printf("%f\n essa", fracionaria6);
    printf("%f\n", fracionaria5);
    printf("%f\n", fracionaria2);

    fracionaria3 = fracionaria5;
    printf("%i\n", fracionaria3);
    // fracionaria2 - fracionaria3
    fracionaria4 = fracionaria5 - fracionaria3;
    printf("%i", fracionaria4);




    // if(fracionaria4 > 7){
    //     printf("O valor da segunda casa decimal e maior que 7");
    // }if(fracionaria4 < 7){
    //     printf("O valor da segunda casa decimal e menor que 7");
    // }if(fracionaria4 == 7){
    //     printf("O valor da segunda casa decimal e igual a 7");
    // }
}
