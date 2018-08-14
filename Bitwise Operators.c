#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
	int i=1,j=2,q=0,a=0,a1=0,a2=0,b=0,b1=0,b2=0,c=0,c1=0,c2=0;
	while(i<n+1)
	{
		q=j;
		while(j<n+1)
		{
			a=i&j;
			if(a<k)
			{
				a2=a1;
				a1=a;
				if(a2>a1)
				{
					a1=a2;
				}
			}
			
			
			b=i|j;
			if(b<k)
			{
				b2=b1;
				b1=b;
				if(b2>b1)
				{
					b1=b2;
				}
			}
			
			c=i^j;
			if(c<k)
			{
				c2=c1;
				c1=c;
				if(c2>c1)
				{
					c1=c2;
				}
			}
			j++;
		}
		j=q+1;
		i++;
	}
	
	printf("%d\n%d\n%d",a1,b1,c1);
	
}


int main() {
	int n, k;
	
	scanf("%d %d", &n, &k);
	calculate_the_maximum(n, k);
	
	return 0;
}
