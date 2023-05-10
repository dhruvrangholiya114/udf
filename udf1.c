#include<stdio.h>

cube(int n1)
{
	int c;
	c=n1*n1*n1;
	printf("Cube of %d is %d",n1,c);
	
}

main()
{
	int a;
	printf("Enter number to find cube :-\n");
	scanf("%d",&a);
	cube(a);
}
