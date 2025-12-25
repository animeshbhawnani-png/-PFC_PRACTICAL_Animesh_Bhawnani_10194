#include <stdio.h>
int main() {
    // Name : Animesh Bhawnani
    // ERP : 10194
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            continue;
        }
        sum = sum + i;
    }
    printf("Sum of even numbers = %d",sum);
    return 0;
}
//  output: 
//  Enter a number: 5
//  Sum of even numbers = 6 