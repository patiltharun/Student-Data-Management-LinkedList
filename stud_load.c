#include "student.h"
void stud_load(void)
{
    FILE *fp;
    stu*new,*temp;

    fp=fopen("student.dat","rb");

    if(fp==NULL)
        return;

    while(1)
    {
        new=malloc(sizeof(stu));

        if(fread(new,sizeof(stu)-sizeof(stu *),1,fp)!=1)
        {
            free(new);
            break;
        }

        new->next=NULL;

        if(head==NULL)
        {
            head=new;
        }
        else
        {
            temp=head;

            while(temp->next!=NULL)
                temp=temp->next;

            temp->next=new;
        }
    }

    fclose(fp);
}
