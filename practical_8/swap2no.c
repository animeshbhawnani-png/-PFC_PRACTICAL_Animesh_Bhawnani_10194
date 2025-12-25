#include <stdio.h>
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // Name : Animesh Bhawnani
    // ERP : 10194
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);   // pass addresses
    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
// output:
// Enter two numbers: 5 8 
// Before swap: x = 5, y = 8
// After swap: x = 8, y = 5