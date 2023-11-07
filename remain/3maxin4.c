#include <stdio.h>

int main() {
    int a, b, c, d;
    int m1, tm, m2, tm2;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);
    printf("Enter the value of d: ");
    scanf("%d", &d);

    if (a > b) {
        m1 = a;
        tm = b;
    } else {
        m1 = b;
        tm = a;
    }

    if (c > d) {
        m2 = c;
        tm2 = d;
    } else {
        m2 = d;
        tm2 = c;
    }

    if (m1 < m2) {
        if (m2 < tm) {
            printf("Third max is: %d\n", m2);
        } else {
            printf("Third max is: %d\n", tm);
        }
    } else {
        if (m2 < tm) {
            printf("Third max is: %d\n", m1);
        } else {
            printf("Third max is: %d\n", tm2);
        }
    }

    return 0;
}







