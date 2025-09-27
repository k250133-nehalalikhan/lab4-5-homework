#include <stdio.h>
int main() 
{
    int age, movie;
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age < 12)
    {
        printf("Child Ticket\n");
    } 
    else if(age <= 60)
    {
        printf("Adult Ticket\n");
    } 
    else
    {
        printf("Senior Citizen Ticket\n");
    }

    printf("Select Movie:\n1. Action\n2. Comedy\n3. Horror\n");
    scanf("%d", &movie);

    switch(movie) 
    {
        case 1: printf("You booked Action Movie.\n"); 
        break;
        case 2: printf("You booked Comedy Movie.\n"); 
        break;
        case 3: printf("You booked Horror Movie.\n"); 
        break;
        default: printf("Invalid selection.\n");
    }

    return 0;
}
