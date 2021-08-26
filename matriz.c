/*
mat 1              mat 2
[1][2][3]      [1][4][7]
[4][5][6]      [2][5][8]
[7][8][9]      [3][6][9]
*/
int main(){
    int matriz1[3][3];
    int matriz2[3][3];
    int linha, coluna;
    printf("Preenchendo a matriz 1: ");
    for(linha = 0; linha < 3; linha++){

    }
    for(coluna = 0; coluna < 3; coluna++){
        scanf("%d", &matriz1[linha][coluna]);

    }
    //mat 2
    for(linha = 0; linha < 3; linha++){


    for(coluna = 0; coluna < 3; coluna++){
        matriz2[coluna][linha] = matriz1[linha][coluna];

    }
}
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0 ; coluna < 3 ; coluna++){
            printf("[%d]", matriz2[linha][coluna]);
        }
    }
    printf("%i", matriz1);
    printf("%i", matriz2);

}
