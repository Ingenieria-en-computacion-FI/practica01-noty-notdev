#include <stdio.h>

int main(){
	// Resolver ejercicio 4

	int a, a3;
	scanf("%d %d", &a, &a3);	

	int type_s	= (a3 - a) / 3;
	int a5		= a + type_s * 5;

	printf("%d\n%d\n", type_s, a5);

	return 0;
}
