#include "student.h"

void stud_save(void)
{
    FILE *fp;
    stu *temp;

    fp = fopen("student.dat", "wb");

    if(fp == NULL)
    {
        printf("Unable to Open File\n");
        return;
    }

    temp = head;

    while(temp != NULL)
    {
        fwrite(temp, sizeof(stu)-sizeof(stu *), 1, fp);
        temp = temp->next;
    }

    fclose(fp);

    printf("Records Saved Successfully\n");
}
