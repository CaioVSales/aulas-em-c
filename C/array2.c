int main(){
    float notas[4] = {8.5, 2.5, 10, 6.5};
    int i;
    for (i = 0 ; i < 4 ; i++){
        printf("Nota %d = %4.2f\n", i + 1, notas[i]);
    }
}
