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

/*

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
*/
#include <stdio.h>
int main()
{
  int a,b,c,d,e,f,g,h;
  int m1,s1,m2,s2,m3,s3,m4,s4,m5,s5,m6,s6,z1,z2,sm;
  printf("enter num seperated by comma: ");
  scanf("%d,%d,%d,%d,%d,%d,%d,%d",&a,&b,&c,&d,&e,&f,&g,&h);
  if(a>b){
    m1=a;
    s1=b;
  }
  else{
    m1=b;
    s1=a;
  }
  if(c>d){
    m2=c;
    s2=d;
  }
  else{
    m2=d;
    s2=c;
  }
  if(e>f){
    m3=e;
    s3=f;
  }
  else{
    m3=f;
    s3=e;
  }
  if(g>h){
   m4=g;
   s4=h;
  }
  else{
    m4=h;
    s4=g;
  }
  if(m1>m2){
    m5=m1;
    s5=m2;
    z1=s2;
  }
  else{
    m5=m2;
    s5=m1;
    z1=s1;
  }
  if(m3>m4){
    m6=m3;
    s6=m4;
    z2=s4;
  }
  else{
    m6=m4;
    s6=m3;
    z2=s3;
  }
  if(m5>m6){
    if(m6>s5){
      if(m6>z1){
        sm=m6;
      }
      else{
        sm=z1;
      }
    }
    else if(s5>z1){
      sm=s5;
    }
    else{
      sm=z1;
    }
  }
  else if(m5>s6){
    if(m5>z2){
      sm=m5;
    }
    else{
      sm=z2;
    }
  }
  else if(s6>z2){
    sm=s6;
  }
  else{
    sm=z2;
  }
  printf("second max in 8 numbers is %d",sm);
  return 0;
}

