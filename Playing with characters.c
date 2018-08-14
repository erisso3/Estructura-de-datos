#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int tam = 256;
	
	char c;
	char a[tam];
	char b[tam];
	
	scanf("%c ", &c);
	scanf("%s ", a);
	fgets(b, tam, stdin);
	
	printf("%c\n", c);
	printf("%s\n", a);
	printf("%s\n", b);
	
	return 0;
}
