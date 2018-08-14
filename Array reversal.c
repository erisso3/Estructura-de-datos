#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num, *arr, i;
	scanf("%d", &num);
	arr = (int*) malloc(num * sizeof(int));
	for(i = 0; i < num; i++) {
		scanf("%d", arr + i);
	}
	
	int a;
	i=0;
	
	while((num-(i+1))>=(num/2)){
		a = arr[i];
		arr[i] = arr[num-(i+1)];
		arr[num-(i+1)] = a;
		i++;
	}
	
	for(i = 0; i < num; i++)
		printf("%d ", *(arr + i));
	return 0;
}
