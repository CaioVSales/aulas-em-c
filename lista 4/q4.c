int main(){
    int i, vetor1[5], vetor2[5], vetor3[5];

    for(i =0 ; i<5; i++){
        printf("Digite os valores do vetor 1: ");
        scanf("%d", &vetor1[i]);
    }

    for(i =0 ; i<5; i++){
        printf("Digite os valores do vetor 2: ");
        scanf("%d", &vetor2[i]);
    }

    for(i =0 ; i<5; i++){
        vetor3[i] = vetor1[i] + vetor2[i];
        printf("{%d}", vetor3[i]);
    }
}
