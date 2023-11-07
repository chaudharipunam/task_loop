/*
// only for square roots -  if I will give 16 then, output will be 4, & if I will give 17 or 18 or....then output  (NOTING)...
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
       int sqrt=i*i;
       if(sqrt==n){
         printf("%d\n",i);
         break;
       }
    }
    return 0;
}

*/

// square root- if I will give 16 then, output will be 4, & if I will give 17 or 18 or....then output will 4..

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
      int p=i+1;
      p=(i+(n/i))/2;
      printf("%d\n",i);
      break;
    }
    return 0;
}
