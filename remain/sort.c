#include <stdio.h>
int main()
{
   int n,t,k;
   scanf("%d",&n);
   int a[n/2],a2[n/2];
   for(int i=0; i<n; i++){
     scanf("%d",&a[i]);
   }
   for(int j=0; j<n; j++){
    for(int s=0; s<n/2; s++){
     t=a[s];
     k=s;
     while (k>0 && a[k-1]>t){
            a[k]=a[k-1];
            k--;
     }
     a[k]=t;
    }
    for(int i=0; i<n/2; i++){
      for(int j=0; j<n/2; j++){
        if(a2[j]>a2[j+1]){
          a2[j]=a2[j]+a2[j+1];
          a2[j+1]=a2[j]-a2[j+1];
          a2[j]=a2[j]-a2[j+1];
        }
      }
    }
   }
   return 0;
} 



