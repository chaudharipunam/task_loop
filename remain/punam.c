/*#include <stdio.h>
int main()
{
   int n;
   printf("enter the num: ");
   scanf("%d",&n);
   int arr[n];
   for(int i=0; i<n; i++){
      scanf("%d",&arr[i]);
   }
   for(int j=0; j<n; j++){
      for(int k=0; k<n-j-1; k++){
         if(arr[k]>arr[k+1]){
            int temp=arr[k];
            arr[k]=arr[k+1];
            arr[k+1]=temp;
         }
      }
   }
   for(int s=0; s<n; s++){
      printf(" %d",arr[s]);
   }
   return 0;
}


//without use third variable........
#include <stdio.h>
int main()
{
   int n;
   printf("enter the num: ");
   scanf("%d",&n);
   int arr[n];
   for(int i=0; i<n; i++){
      scanf("%d",&arr[i]);
   }
   for(int j=0; j<n; j++){
      for(int k=0; k<n-j-1; k++){
         if(arr[k]>arr[k+1]){
            arr[k]=arr[k]+arr[k+1];
            arr[k+1]=arr[k]-arr[k+1];
            arr[k]=arr[k]-arr[k+1];
         }
      }
   }
   for(int s=0; s<n; s++){
      printf(" %d",arr[s]);
   }
   return 0;
}
*/

#include <stdio.h>
int main()
{
     int n,temp;
     scanf("%d",&n);
     int arr[n],s_arr[n];
     for(int i=0; i<n; i++){
       scanf("%d",&arr[i]);
     }
     for(int i=1; i<n; i++){
        temp=arr[i];
        int j=i;
        while(j>0 && arr[j-1]>temp){
            arr[j]=arr[j-1];
            j--;
        }
        arr[j]=temp;
    }
    for(int j=0; j<5; j++) {
        printf("%d ",arr[j]);
    }
    for(int k=n; n>0; k++){
       s_arr[r]=
    }
}



