#include <stdio.h>
int main() {
    // Name : Animesh Bhawnani
    // ERP : 10194
    int rows, cols, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];
    printf("Enter elements of the 2D array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int max = arr[0][0];
    int min = arr[0][0];
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (arr[i][j] > max)
                max = arr[i][j];
            if (arr[i][j] < min)
                min = arr[i][j];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
// Output:
// Enter number of rows and columns: 2 3
// Enter elements of the 2D array:
// 3 5 1
// 8 2 7
// Maximum element = 8
// Minimum element = 1
