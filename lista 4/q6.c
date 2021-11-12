int main(){
    int i, j, tam2 =0, vetor1[500], vetor2[500];
    int achei = 0;
    vetor1[500] = {3,2,1,3,4,1,5,5,2};

    for(i=0; i<9; i++){
        for(j=0; j< tam2; j++){
            if(vetor[i] == vetor2[i]){
                achei = 1;
            }if(achei == 0){
                vetor2[tam2] = vetor1[i];
            }
        }
    }
}
