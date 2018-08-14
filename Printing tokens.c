#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	char *puntero;
	puntero = malloc(1024 * sizeof(char));
	scanf("%[^\n]", puntero);
	puntero = realloc(puntero, strlen(puntero) + 1);
	puntero[strlen(puntero)] = '\0';
	for(int i = 0; puntero[i]; ++i) {
		if (puntero[i] == ' ') puntero[i] = '\n';
	}
	printf("%s", puntero);
	free(puntero);
	return 0;
}
