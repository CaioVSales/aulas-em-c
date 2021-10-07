int main(){

	float x, y, z, a, b, c;

    printf("Digite 3 numeros : ");
	scanf("%f %f %f", &x, &y, &z);

	a = (y + z) / 2;
	b = (x + z) / 2;
	c = (x + y) / 2;

	if( x == a ){
		printf("%f e igual a media de %f e %f", x, y, z);
	}

	if( y == b ){
		printf("%f e igual a media de %f e %f", y, x, z);
	}

	if( z == c ){
		printf("%f e igual a media de %f e %f", z, x, y);
	}
    if( x != a && y != b && z != c ){
        printf("Nao existe nenhuma media");
    }
}
