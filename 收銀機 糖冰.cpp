#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int choice;

    printf("How to adjust the sweetness ?\n\n"
           "1.Normal\n"
           "2.Less sugar\n"
           "3.Half sugar\n"
           "4.Micro sugar\n"
           "5.No sugar\n\n");
    printf("choice =>");
    scanf("%d",&choice);
    printf("\n");

    printf("How to adjust the ice ?\n\n"
           "1.Normal\n"
           "2.Less ice\n"
           "3.Micro ice\n"
           "4.No ice\n\n");
    printf("choice =>");
    scanf("%d",&choice);

    return 0;
}
