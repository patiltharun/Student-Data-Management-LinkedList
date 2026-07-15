#ifndef STUDENT_H
#define STUDENT_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
    int rollno;
    char name[30];
    float percentage;
    struct student *next;
}stu;

extern stu *head;

void stud_add(void);
void stud_show(void);
void stud_del(void);
void stud_mod(void);
void stud_save(void);
void stud_load(void);
void stud_sort(void);
void stud_rev(void);
void stud_del_all(void);
int generate_rollno(void);

#endif
