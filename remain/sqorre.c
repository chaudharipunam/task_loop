#include <stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter the no of a: ");
	scanf("%d",&a);
	printf("enter the no of b: ");
	scanf("%d",&b);
	printf("enter the no of c: ");
	scanf("%d",&c);
	printf("enter the no of d: ");
	scanf("%d",&d);
	if (a==b && b==c && d==c && a==d)
	{
		printf("it is square: ");
	}
	else
	{
		printf("it is rectangle: ");
	}
	return 0;

}
