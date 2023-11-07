#include<stdio.h>

int main() {
    int i, n, min;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        int a;
        printf("Enter number %d: ", i);
        scanf("%d", &a);

        min = a;
        int hcf = min;  // Initialize hcf with min

        for (; hcf != 1; hcf = min) {
            if (hcf % a == 0) {
                hcf = min;
            } else {
                min--;
            }
        }

        printf("HCF of %d: %d\n", a, hcf);
    }

    return 0;
}

