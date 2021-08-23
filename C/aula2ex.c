int main() {
    int x = 7, y = 2, mult;
    printf("Entre %i e %i ", x, y);
    mult = x % y;
    if(mult != 1){
        printf("O %i e multiplo de %i ", x, y);
    }else{
        printf("o %i nao e multiplo de %i ", x, y);
    }

}
