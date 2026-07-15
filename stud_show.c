#include"student.h"
void stud_show(void)
{
    stu *temp;

    if(head == NULL)
    {
        printf("\nNo Student Records Found\n");
        return;
    }

    temp = head;

    printf("\n-------------------------------\n");
    printf("RollNo\tName\t\tPercentage\n");
    printf("---------------------------------\n");

    while(temp != NULL)
    {
        printf("%d\t%s\t\t%f\n",temp->rollno,temp->name,temp->percentage);
        temp = temp->next;
    }
}
