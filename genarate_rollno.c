#include "student.h"
int generate_rollno(void)
{
    int roll = 1;
    stu *temp;

    while(1)
    {
        temp = head;

        while(temp != NULL)
        {
            if(temp->rollno == roll)
                break;

            temp = temp->next;
        }

        if(temp == NULL)
            return roll;

        roll++;
    }
}
