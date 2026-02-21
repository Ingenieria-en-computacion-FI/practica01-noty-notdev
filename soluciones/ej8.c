#include <stdio.h>


int main(){
	// Resolver ejercicio 8

	int m, m1_2;
	scanf("%d %d", &m, &m1_2);

	int n_col	= (m1_2 - m) / 4 - 2;
	int total_size	= 8 * (n_col + 2);

	printf("%d\n%d\n", n_col, total_size);

	return 0;
}
