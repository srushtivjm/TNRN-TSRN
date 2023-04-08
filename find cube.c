#include<stdio.h>

cube()
{
	int n;
	
	printf("Enter value of N for cube=");
	scanf("%d",&n);
	
	printf("%d^3=%d",n,n*n*n);
}

main()
{
    cube();
}
