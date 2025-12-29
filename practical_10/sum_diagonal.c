#include <stdio.h>
int main() {
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
