#include <stdio.h>
int main()
{
	int i,n,c=0,p;
	printf("enter the no.: ");
	scanf("%d",&n);
	
	for (int i=1; i<=n; i++) {
	   if(n%i==0) {
	     c++;
	   }
	}
        if (c==2) {
        printf("it is prime no. %d\n\n\n",n); 
        p=n-1;
        printf("%d\n",p); 
        } else {
        printf(" no prime no. %d\n",n);
        }    
	
        return 0;	    
}
