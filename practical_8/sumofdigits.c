#include <stdio.h>
int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum = sum + (n % 10);  
        n = n / 10;            
    }
    return sum;
}
int main() {
    // Name : Animesh Bhawnani
    // ERP : 10194
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of digits = %d", sumOfDigits(n));

    return 0;
}
// output:
// Enter a number: 5523
// Sum of digits = 15