#include <stdio.h>
int main(void)
{
	
	int prime[28];
	int i;
	int x;
	for(i=0;i<28;i++)
	prime[i]=1;
	
	for(x=2;x<28;x++)
	{
		if(prime[x])
		{
			for(i=2;i*x<28;i++)
			prime[i*x]=0;
		}
	}
	for(i=2;i<28;i++)
	{
		if(prime[i])
		printf("%d\t",i);
	}
	printf("\n"); 
	return 0;
}
