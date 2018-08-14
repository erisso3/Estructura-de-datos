#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
	int n;
	scanf("%d", &n);
	
	int i,k,v,a=0,b,c,d = 2*n-1;
	
	
	for(i = 0 ; i < d ; i++)
	{
		v = n;
		b = a;
		while(b != 0)
		{
			printf("%d ",v--);
			b--;
		}    
		for(k = 0 ; k < d-(a*2) ; k++)
		{
			printf("%d ",v);
		} 
		c = a;
		while(c != 0)
		{
			printf("%d ",++v);
			c--;
		}
		
		if(i < d/2)
			  a++;
		else
			a--;
		printf("\n");
	}
	return 0;
}
