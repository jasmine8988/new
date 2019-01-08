#include <stdio.h>
#include <ctype.h>
#include <conio.h>



int main()
{
    int choice;
    char cont = 'Y';

    printf("Do you want to add some ingredients(Y/N) ?");
    cont = toupper(getchar());

    if(cont=='Y')
    {
        printf("\nCHOICE          $\n\n"
               "1.Pudding      15\n"
               "2.Pearl        10\n"
               "3.Coconut      10\n"
               "4.Ice cream    15\n"
               "5.Fairy grass  10\n");
        printf("choice =>");
        scanf("%d",&choice);
    }

    return 0;
}
