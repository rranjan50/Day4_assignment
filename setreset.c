//set reset of bits
#include<stdio.h>
int main()
{
	int data,bit,n,m;
	printf("enter the data,setbit and resetbit:\n");
	scanf("%d%d%d",&data,&n,&m);
	for(bit=31;bit>=0;bit--)
	{
		printf("%d",(data>>bit)&1);
	}
	printf("\n");
	data=data|(1<<n);//setting of bits
	for(bit=31;bit>=0;bit--)
	{
		printf("%d",(data>>bit)&1);
	}
	printf("\n");
	data=data&(~(1<<m));//resetting of bits
	for(bit=31;bit>=0;bit--)
	{
		printf("%d",(data>>bit)&1);
	}
	printf("\n");


}
