int main(){
    float tempo, fracionaria;
    int horas, minutos, segundos, inteira;
    printf("Digite um valor em minutos: ");
    scanf("%f", &tempo);
    inteira = tempo;
    fracionaria = tempo - inteira;

    segundos = fracionaria * 60;
    minutos = inteira % 60;
    horas = inteira / 60;

    printf("%i hora(s), %i minuto(s), %i segundo(s)", horas, minutos, segundos);

}
