#include <stdio.h>
int main()
{
    int category, item;
    printf("Select Category:\n1. Fast Food\n2. Drinks\n");
    scanf("%d", &category);

    switch(category)
    {
        case 1:
            printf("Fast Food Menu:\n1. Burger\n2. Pizza\n3. Pasta\n");
            scanf("%d", &item);
            switch(item) 
            {
                case 1: printf("You ordered Burger.\n");
                break;
                case 2: printf("You ordered Pizza.\n");
                break;
                case 3: printf("You ordered Pasta.\n");
                break;
                default: printf("Invalid choice.\n");
            }
            break;

        case 2:
            printf("Drinks Menu:\n1. Coke\n2. Fresh Juice\n3. Water\n");
            scanf("%d", &item);
            switch(item)
            {
                case 1: printf("You ordered Coke.\n");
                break;
                case 2: printf("You ordered Fresh Juice.\n");
                break;
                case 3: printf("You ordered Water.\n");
                break;
                default: printf("Invalid choice.\n");
            }
            break;

        default:
            printf("Invalid category.\n");
    }
    return 0;
}
