#include <stdio.h>
int main() {
    // Name : Animesh Bhawnani
    // ERP : 10194
    int n, i, j, sum = 0;
    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    int arr[n][n];
    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        sum = sum + arr[i][i];
    }
    printf("Sum of diagonal elements = %d", sum);
    return 0;
}
// Output:
// Enter order of square matrix: 3
// Enter matrix elements:
// 1 2 3
// 4 5 6
// 7 8 9
// Sum of diagonal elements = 15