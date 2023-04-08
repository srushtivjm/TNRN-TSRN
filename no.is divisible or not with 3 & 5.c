#include<stdio.h>
division()
{
	int a;
	printf("Enter value of a=");
	scanf("%d",&a);
	
	if(a%3==0 && a%5==0)
	{
		printf("%d is divisible of 3 & 5.");
	}
	else
	{
		printf("%d is not divisile of 3 & 5.");
	}
}
main()
{
	division();
}
