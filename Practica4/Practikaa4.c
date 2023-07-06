#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int countEqualDivisors(int n) {
    int count = 0;
    for (int m = 1; m <= n; m++) {
        if (n / m == n % m) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int result = countEqualDivisors(n);
    printf("Number of equal divisors of a number %d: %d\n", n, result);

    return 0;
}
