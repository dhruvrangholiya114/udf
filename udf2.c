#include<stdio.h>


division(int n1)
{
	
	if(n1%3==0 && n1%5==0)
	{
		printf("Given number is divisible by 3 & 5");
	}
	else if(n1%3==0)
	{
		printf("Given number is divisible by 3 ");
	}
	else if(n1%5==0)
	{
		printf("Given number is divisible by 5 ");
	}
	else
	{
		printf("Given number is not divisible by 3 & 5");
	}
	
}
main()
{
	int a;
	printf("Enter any number :-");
	scanf("%d",&a);
	division(a);
}
