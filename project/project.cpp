#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int sc;//sweet choice
int ic;//ice choice
int s=0,i=0;
int c=0;
struct Cost{
    int money[20];
    int sweetc[20];
    int icec[20];
}cost;
int  rand31(){
    return(rand()<<12)+(rand()<<1)+(rand()&1);
}
int sweet(){

printf("sweet level:\n"
       "1.standard\n"
       "2.less sugar\n"
       "3.half sugar\n"
       "4.light sugar\n"
       "5.sugar-free\n"
       "=>");

}
int ice(){
printf("ice level:\n"
       "1.extra ice\n"
       "2.normal\n"
       "3.less ice\n"
       "4.low ice\n"
       "5.ice-free\n"
       "6.warm\n"
       "7.hot\n"
       "=>");

}

void  printl(){
    srand(time(NULL));
     char a [] = {'A','B','C','D','E','F','G','H','I','J',
    'K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

	printf("%c%c-",a[rand()%26],a[rand()%26]);
	printf("%08d ",rand31()%100000000);

}
int  main(){
    Cost cost;
    int total=0;
    int choice;
    int N;
    while(1){
    printf("            MENU\n"
           "Drink:\n"
           "1.Blacktea     cost:20\n"
           "2.Greentea     cost:20\n"
           "3.Milktea      cost:25\n"
           "4.Coffee       cost:35\n");
    printf("\nwaffle:\n"
           "5.chocolate    cost:35\n"
           "6.butter       cost:30\n"
           "7.strawberry   cost:35\n"
           "8.fruit        cost:40\n"
           "9.Exit                \n");
    printf("=>");
    scanf("%d",&choice);
    if(choice==9)
        break;
    switch(choice){
     case 1:
         sweet();
         scanf("%d",&sc);
         cost.sweetc[i]=sc;
         ice();
         scanf("%d",&ic);
         cost.icec[i]=ic;
         cost.money[c]=20;
         i++;
         c++;
         total=total+20;
         printf("%d",total);
    break;
    case 2:
         sweet();
         scanf("%d",&sc);
         cost.sweetc[i]=sc;
         ice();
         scanf("%d",&ic);
         cost.icec[i]=ic;
         cost.money[c]=20;
         i++;
         c++;
         total+=20;
    break;
    case 3:
         sweet();
         scanf("%d",&sc);
         cost.sweetc[i]=sc;
         ice();
         scanf("%d",&ic);
         cost.icec[i]=ic;
         cost.money[s]=25;

         i++;
         c++;
         total+=25;

    break;
    case 4:
         sweet();
         scanf("%d",&sc);
         cost.sweetc[i]=sc;
         ice();
         scanf("%d",&ic);
         cost.icec[i]=ic;
         cost.money[c]=35;
         i++;
         c++;
         total+=35;
    //printf("%d",cost.icec[0]);
    break;
    case 5:
        cost.money[c]=35;
        c++;
        total+=35;
        break;
    case 6:
        cost.money[c]=30;
        c++;
        total+=30;
        break;
    case 7:
        cost.money[c]=35;
        c++;
        total+=+35;
        break;
    case 8:
        cost.money[c]=40;
        c++;
        total+=40;
        break;
    }

    }

printl();
printf("Total:%d\n",total);
return 0;}

