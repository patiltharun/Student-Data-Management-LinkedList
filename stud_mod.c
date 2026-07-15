#include "student.h"
void stud_mod(void)
{
    stu *temp;
    int roll;

    if(head == NULL)
    {
        printf("\nNo Records Found\n");
        return;
    }

    printf("Enter Roll Number to Modify: ");
    scanf("%d", &roll);

    temp = head;

    while(temp != NULL)
    {
        if(temp->rollno == roll)
        {
            printf("\nRecord Found\n");

            printf("Current Name       : %s\n", temp->name);
            printf("Current Percentage : %f\n", temp->percentage);

            printf("\nEnter New Name: ");
            scanf("%s", temp->name);

            printf("Enter New Percentage: ");
            scanf("%f", &temp->percentage);

            printf("\nRecord Modified Successfully\n");
            return;
        }

        temp = temp->next;
    }

    printf("\nRecord Not Found\n");
}
