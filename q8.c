#include <stdio.h>
#include <math.h>
int main()
{
    double P, r, EMI, A;
    int t, type;

    printf("Enter Loan Amount: ");
    scanf("%lf", &P);
    printf("Enter Time (in years): ");
    scanf("%d", &t);
    printf("Enter Interest Rate (%%): ");
    scanf("%lf", &r);
    printf("Interest Type (1.Simple, 2.Compound): ");
    scanf("%d", &type);

    r = r/100; // convert to decimal

    if(type == 1) 
    {
        A = P + (P*r*t);
    }
     else
    {
        A = P * pow((1+r), t);
    }

    EMI = A / (t*12);
    printf("Monthly EMI = %.2lf\n", EMI);

    return 0;
}
