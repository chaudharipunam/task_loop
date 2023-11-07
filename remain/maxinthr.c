#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("enter the no. of a: ");
	scanf("%d",&a);
	printf("enter the no. of b: ");
	scanf("%d",&b);
	printf("enter the no. of c: ");
	scanf("%d",&c);
	if (a>=b && a>=c) {
	max=a;
	} else if
	(b>=c) {
        max=b;
        } else {
        max=c;
        }
        printf ("maximum is: %d",max);
        return 0;	
}



 
