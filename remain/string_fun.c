/*
#include <stdio.h>
int main()
{
     printf("%s\n\n","Hey! I am Punam... What is going with you!!!!\
 i'm very beautiful");
     return 0;
}
*/

/*
 ........OR..........OUTPUT WILL BE SAME  both codes........ 
#include <stdio.h>
int main()
{
     printf("%s\n\n","Hey! I am Punam... What is going with you!!!!"
 " i'm very beautiful");
     return 0;
}

*/


/*

scanf("%s", char *s);

char* gets(char* s)

#include <stdio.h>

int main()
{   
    // array to store string taken as input
    char sentence[30];
    
    // take user input
    printf("Enter any sentence: ");
    
    // use the gets method
    gets(sentence);
    
    // printing the input value
    printf("You entered: %s.", sentence);
    
    return 0;
}

Enter any sentence: I am happy today
You entered: I am happy today.




//str copy function.........
#include <stdio.h>
int main(){
    char s[6]= "Hello";
    char t[6];
    for(int i=0; s[i]!='\0'; i++){
      t[i]=s[i];
    }
    printf("\n%s\n\n",t);
    return 0;
}



// OR....str copy..........
#include <stdio.h>
#include <string.h>
int main(){
    char s[6]= "Hello";
    char t[6];
    printf("%s\n",strcpy(t,s));
    printf("%s\n",t);
    return 0;
}



//str copy in more 2 array.....
#include <stdio.h>
#include <string.h>
int main(){
    char s[6]= "Hello";
    char t[6];
    char u[6];
    strcpy(u,strcpy(t,s));
    printf("%s %s",t,u);
    return 0;
}


//copy N char in string
#include <stdio.h>
#include <string.h>
int main(){
    char s[6]= "Hello";
    char t[5];
    strncpy(t,s,sizeof(t));
    t[sizeof(t)-1]='\0';
    printf("%s ",t);
    return 0;
}


//string length function......
#include <stdio.h>
#include <string.h>
int main(){
    char *s= "Hello";
    printf("%ld\n",strlen(s));
    return 0;
}



//concat/add the two string........strcat function............
#include <stdio.h>
#include <string.h>
int main()
{
   char s[20],t[20];
   strcpy(s, "Welcome to ");
   strcpy(t, "our Academy");
   strcat(s, t);
   printf("%s", s);
   return 0;
}


// 137 line undefined behavior/ s<t...........
#include <stdio.h>
#include <string.h>
int main()
{
    char s[15],t[100];
    strcpy(s, "Welcome to ");
    strcpy(t, "our Academy");
    strcat(s,t);
    printf("%s",s);
    return 0;   
}


//concat/add N char in string
#include <stdio.h>
#include <string.h>
int main(){
   char s[4],t[100];
   strcpy(s,"He");
   strcpy(t,"llo!");
   strncat(s,t,sizeof(s)-strlen(s)-1);
   printf("%s\n",s);
   return 0;
}


//campare between two string (greater/less)......
#include <stdio.h>
#include <string.h>
int main()
{
   char *s="Hello";
   char *t="Hellow";
   if(strcmp(s,t)<0){
     printf("s is less than t");
   }
   else{
     printf("s is greater than or equal to t");
   }
   return 0;
}


#include <stdio.h>
#include <string.h>
int main()
{
   char
}


#include <stdio.h>
#include <string.h>

int main() {
    char s[21];
    char t[11];
    scanf("%s %s", s, t); 
    strcat(s, " san"); 
    printf("%s", s);
    return 0;
}

*/


