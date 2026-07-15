#include"student.h"
void stud_rev(void)
{
    stu *prev, *current, *next;

    if(head == NULL)
    {
        printf("No Records Found\n");
        return;
    }

    prev = NULL;
    current = head;

    while(current != NULL)
    {
        next = current->next;

        current->next = prev;

        prev = current;

        current = next;
    }

    head = prev;

    printf("Linked List Reversed Successfully\n");
}
