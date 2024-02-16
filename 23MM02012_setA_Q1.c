#include <stdio.h>
int main()
{
    float r, v, a;

    printf("enter the radius");
    scanf("%f", &r);
    a = 4 * 3.14 * r * r;
    v = 1.33 * 3.14 * r * r * r;

    printf("\n The surface area of sphere is: %.2f ", a);
    printf("\n The volume of sphere is:%.2f ", v);

    return 0;
}