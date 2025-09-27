#include <stdio.h>
#include <math.h>
int main()
{
    int shape, choice;
    double r, l, w, a, b, h, c;
    printf("Select Shape:\n1. Circle\n2. Rectangle\n3. Triangle\n");
    scanf("%d", &shape);

    switch(shape)
    {
        case 1:
            printf("Circle selected. 1.Area 2.Perimeter: ");
            scanf("%d", &choice);
            printf("Enter radius: ");
            scanf("%lf", &r);
            switch(choice) 
			{
                case 1: printf("Area = %.2lf\n", M_PI*r*r); 
                break;
                case 2: printf("Perimeter = %.2lf\n", 2*M_PI*r); 
                break;
                default: printf("Invalid.\n");
            }
            break;

        case 2:
            printf("Rectangle selected. 1.Area 2.Perimeter: ");
            scanf("%d", &choice);
            printf("Enter length & width: ");
            scanf("%lf %lf", &l, &w);
            switch(choice)
			{
                case 1: printf("Area = %.2lf\n", l*w); 
                break;
                case 2: printf("Perimeter = %.2lf\n", 2*(l+w)); 
                break;
                default: printf("Invalid.\n");
            }
            break;

        case 3:
            printf("Triangle selected. 1.Area 2.Perimeter: ");
            scanf("%d", &choice);
            if(choice == 1)
			{
                printf("Enter base and height: ");
                scanf("%lf %lf", &b, &h);
                printf("Area = %.2lf\n", 0.5*b*h);
            }
            else if(choice == 2)
			{
                printf("Enter three sides: ");
                scanf("%lf %lf %lf", &a, &b, &c);
                printf("Perimeter = %.2lf\n", a+b+c);
            }
            else printf("Invalid.\n");
            break;

        default:
            printf("Invalid shape.\n");
    }
    return 0;
}
