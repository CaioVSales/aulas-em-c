int main(){
    int i, j, vetor1[8], vetor2[8], vetor3[8];
    for (i=0; i<8;i++){
        printf("Digite os valores do vetor 1: ");
        scanf("%d", &vetor1[i]);
        // printf("{%d}", vetor1[i]);
    }

    for (i=0; i<8;i++){
        printf("Digite os valores do vetor 2: ");
        scanf("%d", &vetor2[i]);
        // printf("{%d}", vetor2[i]);
    }

    for (i=0; i<8;i++){
        if(i < 4){
            vetor3[i] = vetor1[i];
            printf("{%d}", vetor3[i]);
        }

    }for (j=0;j<8;j++){
        if(j>3){
            vetor3[j] = vetor2[j];
            printf("{%d}", vetor3[j]);
        }
    }
}
