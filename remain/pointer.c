/*

//print address of variable.......
#include <stdio.h>
int main()
{
   int n=8;
   int* p=&n;
   printf("%p\n",p);//address of variable
   printf("%p\n",&p);// address of itself & it store the address of other address.....
   return 0;
}
*/

/*

//if variable will change , then their address also will be change....
#include <stdio.h>
int main()
{
   int a=8;
   int b=8;
   printf("%p\n",&a);
   printf("%p\n",&b);
   return 0;
}

*/

// in this code if *p's value will update ,then output will be print update value............
/*
#include <stdio.h>
int main()
{
   int n=8;
   int* p=&n;
   *p=7;
   printf("%d\n",n);//address of variable
   return 0;
}
*/


// swapping  &  (pass by reference)   in pointer,,,,,,,,
#include <stdio.h>
void swap(int* x, int* y){  //dabbe of pointer
   int t;
   t=*x;
   *x=*y;
   *y=t;
   return;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    //int* x=&a;   //1
    //int* y=&b;   //2
    //swap(x,y);   //3    these 3 lines or 
    swap(&a,&b);   // or this one line output will be same  (dabbe of integer)
    printf("in swap form \n");
    printf("%d\n",a);
    printf("%d\n",b);
    return 0;
}

