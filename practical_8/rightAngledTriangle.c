#include <stdio.h>
void printTriangle(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    // Name : Animesh Bhawnani
    // ERP : 10194
    int n;
    printf("Enter height: ");
    scanf("%d", &n);
    printTriangle(n);

    return 0;
}
// output:
// Enter height: 5
// *
// **
// ***
// ****
// *****