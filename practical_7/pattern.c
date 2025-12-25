#include <stdio.h>
int main() {
    // Name : Animesh Bhawnani
    // ERP : 10194
    int i, j;
    for (i = 1; i <= 4; i++) {
        char ch = 'A';
        for (j = 0; j < i; j++) {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
// output:
// A
// AB
// ABC
// ABCD
