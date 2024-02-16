#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, D, root1, root2;
    
    printf("Enter the coefficient of x^2: ");
    scanf("%f", &a);
    
    printf("Enter the coefficient of x: ");
    scanf("%f", &b);
    
    printf("Enter the constant term: ");
    scanf("%f", &c);
    
    D = b * b - 4 * a * c;

    if (a == 0) {
        printf("This is not a quadratic equation (a cannot be zero)\n");
    } else if (D > 0) {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);

        printf("Root 1: %f\n", root1);
        printf("Root 2: %f\n", root2);
    } else if (D == 0) {
        printf("Roots are real and equal: %f\n", -b / (2 * a));
    } else {
        printf("Roots are complex\n");
    }

    return 0;
}
