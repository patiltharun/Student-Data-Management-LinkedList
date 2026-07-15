#include"student.h"
void stud_del_all(void)
{
    stu*temp;

    if(head == NULL)
    {
        printf("No Records Found\n");
        return;
    }

    while(head != NULL)
    {
        temp = head;

        head = head->next;

        free(temp);
    }

    printf("All Records Deleted Successfully\n");
}
