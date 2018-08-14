#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int i;
	char a[1000]; 
	char b[10];
	scanf("%s", &a);
	int c = strlen(a);
	for (i = 0; i < 10; i++) b[i] = 0;
	
	for (i = 0; i < c; i++) {
		int x = a[i] - '0';
		if (x >= 0 && x <= 9) b[x]++;
	}
	for (int i = 0; i < 10; i++) printf("%d ", b[i]);
	return 0;
}
