#include <stdio.h>
int main() {
    // Name : Animesh Bhawnani
    // ERP : 10194
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);
    return 0;
}
// Output:
// Enter number of elements: 6
// Enter array elements:
// 3 5 1 8 2 7
// Maximum element = 8
// Minimum element = 1