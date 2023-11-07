#include <stdio.h>
int main()
{
   int n,a,i,max,min;
   printf("enter the num: ");
   scanf("%d",&n);
    if (n <= 0) {
        printf("No numbers to find max and min.\n");
        return 0;
    }
     printf("Enter number 1: ");
    scanf("%d", &a);
    max = min = a;
    
   for (i=2; i<=n; i++){
     printf("Enter number %d:",i);
     scanf("%d",&a);
     if(a>max){
       max=a; 
     }
     if(a<min){
       min=a;
     }
   }
   printf("\n");
   printf("maximum num: %d\n",max);
   printf("minimum num: %d\n",min);
   return 0;
}
