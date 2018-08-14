#include <stdlib.h>
#include <stdio.h>
void punteros(int *a,int *b) { 
	*a=*a+*b;
	*b= abs(*a-(2**b));
	
}

int main() {
	int a, b;
	int *pa = &a, *pb = &b;
	
	scanf("%d %d", &a, &b);
	punteros(pa, pb);
	printf("%d\n%d", a, b);
	
	return 0;
}
