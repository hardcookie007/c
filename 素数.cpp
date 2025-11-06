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

//临摹翁恺老师8.2.2
//太难了，第一次听完课，看着源代码都写不出来，不敢想我以后怎么自己写代码啊（发愁）
