//check lower case or not ..........

#include <stdio.h>
int main() {
    int p = 7, count = 0;
    int n=10,k=0;
    char arr[n],secarr[k];
    for (int i = 0; i < n; i++) {
        char s;
        printf("Enter a character: ");
        scanf(" %c", &s); // Notice the space before %c to consume newline characters.

        if (s >= 'a' && s <= 'z') {
            arr[i] = s;
            count++;
        } else {
            printf("%c - This is not a lowercase letter\n", s);
        }
        
        if (count == p) {
          printf("%c\n", s);
        }
    }
    return 0;
}

