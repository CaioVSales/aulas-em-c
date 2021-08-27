int main(){
    int segundos, minutos, horas;
    float tempo;
    printf("Digite um valor em minutos: ");
    scanf("%f", &tempo);
    segundos = tempo * 60;
    minutos = tempo;
    horas = tempo / 60;
    printf("%i hora(s), %i minuto(s), %i segundo(s)", horas, minutos, segundos);
}
