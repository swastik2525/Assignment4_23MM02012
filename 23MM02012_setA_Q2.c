#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int a, d, arr[100], i = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &a);
    d = a; 

    while (d > 0) {
        arr[i] = d % 10;
        d = d / 10;
        i++;
    }

    for (int j = 0; j < i; j++) {
        sum += factorial(arr[j]);
    }

    if (sum == a)
        printf("%d is a strong number\n", a);
    else
        printf("%d is not a strong number\n", a);

    return 0;
}
