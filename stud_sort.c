#include"student.h"
void stud_sort(void)
{
    stu *p1,*p2;
    stu temp;
    char op;

    if(head==NULL || head->next==NULL)
    {
        printf("Not enough records to sort\n");
        return;
    }

    printf("\nN/n : Sort by Name");
    printf("\nP/p : Sort by Percentage");
    printf("\nEnter choice : ");
    scanf(" %c",&op);

    if(op=='N' || op=='n')
    {
        for(p1=head;p1!=NULL;p1=p1->next)
        {
            for(p2=p1->next;p2!=NULL;p2=p2->next)
            {
                if(strcmp(p1->name,p2->name)>0)
                {
                    temp=*p1;
                    *p1=*p2;
                    *p2=temp;

                    temp.next=p1->next;
                    p1->next=p2->next;
                    p2->next=temp.next;
                }
            }
        }

        printf("Sorted by Name\n");
    }

    else if(op=='P' || op=='p')
    {
        for(p1=head;p1!=NULL;p1=p1->next)
        {
            for(p2=p1->next;p2!=NULL;p2=p2->next)
            {
                if(p1->percentage > p2->percentage)
                {
                    temp=*p1;
                    *p1=*p2;
                    *p2=temp;

                    temp.next=p1->next;
                    p1->next=p2->next;
                    p2->next=temp.next;
                }
            }
        }

        printf("Sorted by Percentage\n");
    }

    else
    {
        printf("Invalid Choice\n");
    }
}
