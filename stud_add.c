#include"student.h"
void stud_add(void)
{
    stu *new, *temp;

    new=(stu*)malloc(sizeof(stu));

    if(new == NULL)
    {
        printf("Memory Allocation Failed\n");
        return;
    }

    new->rollno = generate_rollno();

    printf("Assigned Roll Number : %d\n", new->rollno);

    printf("Enter Name : ");
    scanf("%s",new->name);

    printf("Enter Percentage : ");
    scanf("%f",&new->percentage);

    new->next=NULL;

    if(head==NULL)
    {
        head = new;
    }
    else
    {
        temp = head;

        while(temp->next!=NULL)
        {
            temp = temp->next;
        }

        temp->next =new;
    }
}
