#include <stdio.h>
int main()
{
   int i,n,d;
   printf("enter the num: ");
   scanf("%d",&n);
   for(int i=1; i<=n; i++){
     int sum=0;
     while(i>0){
       d=n%10;
       sum=sum*10+d;
       
     }
     printf("%d  %d ",n, sum);
   }
   return 0;
}
