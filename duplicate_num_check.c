#include <stdio.h>

int main() {
    long int n;
    int digit;
    int freq[10] = {0};   // stores count of digits
    int duplicate = 0;

    printf("Enter a number: ");
    scanf("%ld", &n);

    if(n < 0) n = -n;   // handle negative numbers

    while(n > 0) {
        digit = n % 10;

        if(freq[digit] == 1) {
            duplicate = 1;
            break;
        }

        freq[digit] = 1;
        n = n / 10;
    }

    if(duplicate)
        printf("Duplicate digits found\n");
    else
        printf("No duplicate digits\n");

    return 0;
}
