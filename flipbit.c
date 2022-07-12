//flipping of bits
#include<stdio.h>
int main()
{
	int data,n,bit;
	printf("enter the data,bit to flip:");
	scanf("%d%d",&data,&n);
	for(bit=31;bit>=0;bit--)
	{
		printf("%d",(data>>bit)&1);
	}
	printf("\n");
	data=data^(1<<n);
	printf("%d\n",data);
	for(bit=31;bit>=0;bit--)
	{
		printf("%d",(data>>bit)&1);
	}
	printf("\n");
}





	

