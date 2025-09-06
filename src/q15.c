#include <stdio.h>
int main() {
    int n, i = 2, isPrime = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 1)
        isPrime = 0;

    while (i <= n / 2) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
        i++;
    }

    if (isPrime)
        printf("Prime Number\n");
    else
        printf("Not Prime\n");

    return 0;
}
