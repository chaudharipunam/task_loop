//.....first k elements go to last......

/*

#include <stdio.h>
int main()
{
   int n,s; 
   printf("enter the number: ");
   scanf("%d",&n);
   int arr[n],s_arr[n];
   for(int i=0; i<n; i++){
     scanf("%d",&arr[i]);
   }
   int p=0;
   printf("S is: ");
   scanf("%d",&s);
   for(int k=s; k<n; k++){
     s_arr[p]=arr[k];
     p++;
   }
   for(int j=0; j<s; j++){
     s_arr[p]=arr[j];
     p++;
   }
   for(int s=0; s<n; s++){
     printf("%d ",s_arr[s]);
   }
   return 0;
}


//........sum of two elements is equal to given s num......
#include <stdio.h>
int main()
{
   int n,m; 
   printf("enter the number: ");
   scanf("%d",&n);
   int arr[n];
   for(int i=0; i<n; i++){
     scanf("%d",&arr[i]);
   }
   printf("M is: ");
   scanf("%d",&m);
   for(int k=0; k<n; k++){
     int sum=0;
     sum=arr[k]+arr[k+1];
     if(sum==m){
       printf("%d %d",arr[k],arr[k+1]);
     }
   }
   return 0;
}

*/
//......store random number & reverse it without use (n-1) & then print it.......
#include <stdio.h>
int main()
{
   int n,s;
   printf("enter the num: ");
   scanf("%d",&n);
   int arr[n],s_arr[n];
   for(int i=0; i<n; i++){
     scanf("%d",&arr[i]);
   }
   for(int j=0; j<n/2; j++){
     int temp=arr[j];
     arr[j]=arr[n-j-1];
     arr[n-j-1]=temp;   
   }
   for(int k=0; k<n; k++){
     printf(" %d",arr[k]);
   }
   return 0;
  
}


