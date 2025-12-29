#include <stdio.h>
int main() {
    // Name : Animesh Bhawnani
    // ERP : 10194
    int n, i, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum = sum + arr[i];
        }
    }
    printf("Sum of even elements = %d", sum);
    return 0;
}
// Output:
// Enter number of elements: 5
// Enter array elements:
// 8 9 22 4 6
// Sum of even elements = 40