#include"student.h"
stu *head=NULL;
int main()
{
    stud_load();
   char op;

    while(1)
    {
        printf("\n***** STUDENT RECORD MENU *****\n");
        printf("a/A : Add Record\n");
        printf("s/S : Show Records\n");
        printf("D/d : Delete Record\n");
        printf("M/m : Modify Record\n");
        printf("V/v : save the records\n");
        printf("T/t : sort the records\n");
        printf("R/r : reverse the records\n");
        printf("L/l : delete all records\n");

        printf("e/E : Exit\n");

        printf("Enter your choice: ");
        scanf(" %c",&op);

        switch(op)
        {
            case 'a':
            case 'A':
                stud_add();
                break;

            case 's':
            case 'S':
                stud_show();
                break;

            case 'd':
            case 'D':
                stud_del();
                break;

                case 'm':
               case 'M':
                stud_mod();
                 break;

                 case 'v':
                 case 'V':
                 stud_save();
                   break;

                   case 't':
                   case 'T':
                   stud_sort();
                    break;

                    case 'r':
                    case 'R':
                   stud_rev();
                      break;

                      case 'l':
                     case 'L':
                    stud_del_all();
                     break;


                     case 'e':
                     case 'E':
{
    char ch;

    printf("\nS : Save and Exit");
    printf("\nE : Exit without Saving");
    printf("\nEnter Choice : ");
    scanf(" %c",&ch);

    if(ch=='S' || ch=='s')
    {
        stud_save();
    }

    exit(0);
}
                 return 0;


            default:
                printf("Invalid Choice\n");
        }
    }
}
