#include <stdio.h>
int main() {
    // Name : Animesh Bhawnani
    // ERP : 10194
    int pin = 1234;     // Correct PIN
    int enteredPin;
    int attempts = 3;

    while (attempts > 0) {
        printf("Enter ATM PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin == pin) {
            printf("PIN correct. Access granted.\n");
            break;
        } else {
            attempts--;
            printf("Wrong PIN. Attempts left: %d\n", attempts);
        }
    }
    if (attempts == 0) {
        printf("Card blocked. Too many wrong attempts.\n");
    }
    return 0;
}
// Enter ATM PIN: 1111
// Wrong PIN. Attempts left: 2
// Enter ATM PIN: 2351
// Wrong PIN. Attempts left: 1
// Enter ATM PIN: 5231
// Wrong PIN. Attempts left: 0
// Card blocked. Too many wrong attempts.