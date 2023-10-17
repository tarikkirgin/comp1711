#include <stdio.h>

int main()
{
    int choice;
    printf("Choose a menu option from 1 - 5: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            printf("You chose menu option one.\n");
            break;
        case 2:
            printf("You chose menu option two.\n");
            break;
        case 3:
            printf("You chose menu option three.\n");
            break;
        case 4:
            printf("You chose menu option four.\n");
            break;
        case 5:
            printf("You chose menu option five.\n");
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }
    return 0;
}
