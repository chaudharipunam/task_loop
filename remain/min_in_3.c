/*
#include <stdio.h>
int main(){
  int a,b,c;
  printf("a is: ");
  scanf("%d",&a);
  printf("b is: ");
  scanf("%d",&b);
  printf("c is: ");
  scanf("%d",&c);
  if(a<b){
   if(a<c){
    printf("min is: %d",a);
   }
   else{
    printf("min is: %d",c);
   }
  }
  else if(b<a){
   if(b<c){
    printf("min is: %d",b);
   }
   else{
    printf("min is: %d",c);
   }
  }
   return 0;
}
*/

//sec_max in three numbers...........
/*
#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int second_max;

    if (a >= b && a >= c) {
        if (b >= c) {
            second_max = b;
        } else {
            second_max = c;
        }
    } else if (b >= a && b >= c) {
        if (a >= c) {
            second_max = a;
        } else {
            second_max = c;
        }
    } else {
        if (a >= b) {
            second_max = a;
        } else {
            second_max = b;
        }
    }

    printf("Second maximum: %d\n", second_max);

    return 0;
}


*/

/*

#include <stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0; i<n; i++){
     scanf("%d",&a[i]);
   }
   for(int i=0; i<n; i++){
     for(int j=0; j<n-i-1; j++){
       if(a[j]>a[j+1]){
         int t=a[j];
         a[j]=a[j+1];
         a[j+1]=t;
       }
     }
   }
   for(int k=0; k<n; k++){
     printf("%d\n",a[k]);
   }
   return 0;
}

*/

/*
// min in N num............
#include <stdio.h>
int main(){
   int n;
   printf("enter the num: ");
   scanf("%d",&n);
   int a[n];
   for(int i=0; i<n; i++){
     scanf("%d",&a[i]);
   }
   int min=a[0];
   int sm=a[0];
   for(int j=0; j<n; j++){
     if(a[j]<min){
       sm=min;
       min=a[j];
     }
     else if(a[j]<sm){
       sm=a[j];
     }
   }
   printf("%d\n",sm);
   return 0;
}
*/

/*
#include <stdio.h>
int main(){
   int n;
   printf("enter the num: ");
   scanf("%d",&n);
   int a[n];
   for(int i=0; i<n; i++){
     scanf("%d",&a[i]);
   }
   int m=a[0];
   int sm=a[1];
   if(sm>m){
       int t=m;
       m=sm;
       sm=t;
   }
   for(int j=2; j<n; j++){
     if(a[j]>m){
       sm=m;
       m=a[j];
     }
     else if(a[j]>sm && a[j]!=m){
       sm=a[j];
     }
   }
   printf("second max:  %d\n",sm);
   return 0;
}

*/

#include <stdio.h>
int main(){
   int n;
   printf("enter the num: ");
   scanf("%d",&n);
   int a[n];
   for(int i=0; i<n; i++){
     scanf("%d",&a[i]);
   }
   int c=0;
   for(int i=0; i<n; i++){
     for(int j=i+1; j<n; j++){
       if(a[i]==a[j]){
        c++;
       }
     }
     printf("%d",c);
   }
   return 0;
}  



