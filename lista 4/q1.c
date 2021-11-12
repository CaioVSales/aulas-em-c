float notas(float nota1, float nota2){
    float media;
    media = nota1 / nota2;
    return media;
}

int main(){
    float nota1, nota2, media;
    float resultado;
    printf("Digite o valor da primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite o valor da segunda nota: ");
    scanf("%f", &nota2);
    resultado = notas()
    printf("A media das duas notas e igual a: %f", resultado);
}
