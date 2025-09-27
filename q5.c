#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, d, root1, root2;

    printf("Enter coefficients a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    d = b*b - 4*a*c;

    if(d > 0)
    {
        root1 = (-b + sqrt(d)) / (2*a);
        root2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are real and distinct: %.2lf , %.2lf\n", root1, root2);
    }
    else if(d == 0)
    {
        root1 = root2 = -b / (2*a);
        printf("Roots are real and equal: %.2lf , %.2lf\n", root1, root2);
    }
    else
    {
        double real = -b / (2*a);
        double imag = sqrt(-d) / (2*a);
        printf("Roots are imaginary: %.2lf+%.2lfi , %.2lf-%.2lfi\n", real, imag, real, imag);
    }

    return 0;
}
