int main(){
    int vetor1[6], vetor2[6], i;

    for(i = 0; i<6; i++){
        printf("Digite os valores do vetor: ");
        scanf("%d", &vetor1[i]);
    }

    for(i = 0; i<6; i++){
        if(i % 2 == 0){
            vetor2[i+1] = vetor1[i];
        }else{
            vetor2[i-1] = vetor1[i];
        }
    }
    for(i =0; i<6;i++){
        printf("{%d}", vetor2[i]);
    }
}
