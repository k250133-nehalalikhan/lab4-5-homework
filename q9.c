#include <stdio.h>
int main()
{
    int dept, course;
    printf("Select Department:\n1. Computer Science (CS)\n2. Electrical Engineering (EE)\n3. Business Administration (BBA)\n");
    scanf("%d", &dept);
    switch(dept)
	{
        case 1:
            printf("\nCS Department-Available Courses:\n1. Programming Fundamentals\n2. Data Structures\n");
            scanf("%d", &course);
            switch(course)
			{
                case 1: 
				printf("You registered for Programming Fundamentals\n"); 
				break;
                case 2: 
				printf("You registered for Data Structures\n"); 
				break;
                default: 
				printf("Invalid Course Selection in CS Department\n");
            }
            break;
        case 2:
            printf("\nEE Department-Available Courses:\n1. Digital Logic Design\n2. Circuit Analysis\n");
            scanf("%d", &course);
            switch (course)
			{
                case 1: 
				printf("You registered for Digital Logic Design\n"); 
				break;
                case 2: 
				printf("You registered for Circuit Analysis\n"); 
				break;
                default: 
				printf("Invalid Course Selection in EE Department\n");
            }
            break;
        case 3:
            printf("\nBBA Department-Available Courses:\n1. Business Communication\n2. Financial Management\n");
            scanf("%d", &course);
            switch (course)
			{
                case 1: 
				printf("You registered for Business Communication\n"); 
				break;
                case 2: 
				printf("You registered for Financial Management\n"); 
				break;
                default:
				printf("Invalid Course Selection in BBA Department\n");
            }
            break;
        default:
            printf("Invalid Department Selection\n");
    }
    return 0;
}
