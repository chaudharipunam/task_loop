// ........OR..........OUTPUT WILL BE SAME  both codes........ 
/*

#include <stdio.h>
int main()
{
     printf("%s\n\n","Hey! I am Punam... What is going with you!!!!"
 " i'm very beautiful");
     return 0;
}
*/

/*
//covert 1st str into 2nd str...........
#include <stdio.h>
int main(){
    char s[6]= "Hello";
    char t[6];
    for(int i=0; s[i]!='\0'; i++){
      t[i]=s[i];
    }
    printf("%s \n",t);
    return 0;
}
*/

//PRINT RANDOM one char............
/*
#include <stdio.h>
int main()
{
   char a[5]={'P','U','N','A','M'};
   printf("%c\n",a[4]);
   return 0;
}
*/

/*
//print str but if 2 str so, then connect with underscore(_) ex. Hello_world
#include <stdio.h>
int main()
{
    char a[10];
    printf("enter the string: ");
    scanf("%10s",a);
    a[10]='\0';
    printf("output is: %s\n",a);
    return 0;
}
*/


/*
//print (hello_world)
#include <stdio.h>
int main()
{
    char a[11]={'H','e','l','l','o',' ','W','o','r','l','d'};
    for(int i=0; i<11; i++){
       printf("%c", a[i]);
    }
    printf("\n");
    return 0;
}
*/

/*
//nothing print because here '\0' is a only one single character those contain two character........... 
#include <stdio.h>
int main()
{
    char arr[]={'H','e','l','l','o'};
    char ch ='\0';
    int a=0;
    char x=(char)a;
    printf("%c",x);
    
    return 0;
}

*/

/*
//print characters (Hello) with use of  '\0'............
#include <stdio.h>
int main(){
     char a[10]={'H','e','l','l','o','\0'};
     int i=0;
     while(a[i]!='\0'){
       printf("%c",a[i]);
       i++;
     }
     printf("\n");
     return 0;
}
*/


/*
// replace integer.........
#include <stdio.h>
int main()
{
   int a[5]={1,2,3,4,5};
   a[2]=8;
   int i=0; 
   while(a[i]!='\0'){
      printf("%d ",a[i]);  //we can write like this also (*(a+i), *(i+a), i[a])----instead of a[i]...
      i++;
   }
   return 0;
}
*/


/*
//replace char.........
#include <stdio.h>
int main()
{
   int a[5]={'R','i','n','k','u'};
   a[2]=98;
   int i=0; 
   while(a[i]!='\0'){
      printf("%c ",a[i]);
      i++;
   }
   return 0;
}

*/

/*

//print whole str without use loop / with use printf & scanf.......
#include <stdio.h>
int main(){
   char p[]="Punam is a pretty girl";
   printf("%s\n",p);
   return 0;
}

*/

/*
//use of puts function......
#include <stdio.h>
int main()
{
    char a[]="Hello! I'M PUNAM";
    //printf("%s\n",a);
    puts(a);
    return 0;
}
*/

/*
// print direct string without use loop (not use of '&' in the scanf line)............
#include <stdio.h>
int main()
{
   char str[20];
   scanf("%s",str);
   printf("your input was: %s",str);
   return 0;
}
*/

/*
// use of fgets function print all string, those given by input as it is......
#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    if(fgets(str, sizeof(str),stdin)!=NULL){
      size_t len =strlen(str);
      if(len>0 && str[len-1]=='\n'){
         str[len-1]='\0';
      }
      printf("your input was: %s\n",str);
    }
    else{
      printf("error reading input.\n");
    }
    return 0;
}
*/

/*
// print the input use ("%[^\n]s") this in the scanf line, print but according to the length of the string..........
#include <stdio.h>
int main(){
     char str[20];
     scanf("%[^\n]s", str);
     //printf("your input was: %s",str); //..........or....
     puts(str);      //..or.........
     return 0;
}
*/

/*
//print the (length) size of string.....
#include <stdio.h>
int main()
{
   char str[15];
   scanf("%[^\n]s",str);
   int i=0,size=0; 
   while(str[i]!='\0'){
     size++;
     i++;
   }
   printf("%d",size);
   return 0;
}
*/

/*
//print reverse string by using 3rd variable use of 'puts' function..........
#include <stdio.h>
int main()
{
  char str[40];
  scanf("%[^\n]s",str);
  int i=0,size=0;
  while(str[i]!='\0'){
    size++;
    i++;
  }
  for(int i=0,j=size-1; i<=j; j--,i++){
     char temp=str[i];
     str[i]=str[j];
     str[j]=temp;
  }
  puts("the reverse  is: ");
  puts(str);
  return 0;
}
*/

/*
//use pointer & print string...............
#include <stdio.h>
int main()
{
   char* ptr="punam chaudhari";
   //printf("%s\n",ptr);
   puts(ptr);
   return 0;
}
*/

/*
//print 1 char by using pointer..............
#include <stdio.h>
int main(){
   char*  ptr="punam chaudhari";
   //ptr++;  //(it's for increament of character & if we give this then it will be print 2nd element)..........
   printf("%c\n",*ptr);
   return 0;
}
*/

/*
//in the string we can't convert directly whole string we can convert the string by character wise  through the char......by  using loop.......

#include <stdio.h>
int main()
{
    char str[]="punam";
    str[4]='A';
    printf("%s\n",str);
    return 0;
}

*/

/*
// instead of first entire string we get second string by using of pointer......... 
#include <stdio.h>
#include <string.h>
int main(){
   char str[]="punam";
   char* ptr="chaudhary";
   printf("%s", ptr);
   return 0;
}

*/

/*
// change the char in the string by using pointer......
#include <stdio.h>
#include <string.h>
int main(){
    char str[]="Ritu";
    char* ptr=str;
    ptr++;
    *ptr='u';
    printf("%s",str);
    return 0;
}

*/

/*
// change the address according to pointer.............
#include <stdio.h>
#include <string.h>
int main(){
    char *ptr="punam";
    printf("add 1: %p\n",ptr);
    ptr="chaudhary";
    printf("add 2: %p",ptr);
    return 0;
}
*/

/*
//in the pointer change the first  char........
#include <stdio.h>
#include <string.h>
int main(){
    char str[]="Janam";
    char* str2=str;
    str[0]='S';
    printf("%s\n",str2);
    return 0;
}

*/

/*
// 2 string print using pointer..........
#include <stdio.h>
#include <string.h>
int main(){
    char s1[]="Janam";
    char* s2;
    s2=s1;
    s2="Sanam";
    printf("%s\n",s1);
    printf("%s\n",s2);
    return 0;
}
*/

/*
// functions...........1.(strlen)....
//in the pointer 
#include <stdio.h>
#include <string.h>
int main()
{
    char* str="Punam chaudhary";
    int n=strlen(str);
    printf("%d\n",n);
    return 0;
}
*/

/*
//function............2.(strcpy)......
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20]="punam chaudhary";
    char s2[20];
    strcpy(s2,s1);
    //s2[0]='S';   this is deep copy this identify from this line...if s2 change hota ho & s1 print krte samay s1 vahi rhta ho to it is called deep copy.............. 
    printf("%s",s1);
    return 0;
}
*/

/*
//function............3.(strcat).......according to length of s1....
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20]="Punam ";
    char s2[]="Chaudhary ";
    strcat(s1,s2);
    printf("%s",s1);
    return 0;
    
}
*/

/*
// insert one element in the string using loop.......
#include <stdio.h>
#include <string.h>
int main()
{
   char str[20]="Punam";
   //2nd index pe 'k'
   for(int i=5; i>=2; i--){
     str[i+1]=str[i];
   }
   str[2]='k';
   printf("%s",str);
   return 0;
}

*/


