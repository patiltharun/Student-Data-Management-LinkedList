#include"student.h"
void stud_del(void)
{
    stu *temp, *prev;
    int roll;

    if(head == NULL)
    {
        printf("No Records Found\n");
        return;
    }

    printf("Enter Roll Number : ");
    scanf("%d",&roll);

    if(head->rollno == roll)
    {
        temp = head;
        head = head->next;
        free(temp);
        printf("Record Deleted\n");
        return;
    }

    prev = head;
    temp = head->next;

    while(temp!=NULL)
    {
        if(temp->rollno == roll)
        {
            prev->next = temp->next;
            free(temp);
            printf("Record Deleted\n");
            return;
        }

        prev = temp;
        temp = temp->next;
    }

    printf("Record Not Found\n");
}
