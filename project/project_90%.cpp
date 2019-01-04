#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <string>
#include<strings.h>
int sc;//sweet choice
int ic;//ice choice
int s=0,i=0;
int w=0;

struct Cost{
    int money[20];
    char *Drink[20];
    char *Order[20];
    char *sweetc[20];
    char *icec[20];
    int Wmoney[20];
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
	printf("|        %c%c-",a[rand()%26],a[rand()%26]);
	printf("%08d          |",rand31()%100000000);

}
void scanice(int n){
        scanf("%d",&n);
        if(n==1){
            cost.icec[i]="extra ice";
        i++;}
        if(n==2){
            cost.icec[i]="normal";
        i++;}
        if(n==3){
            cost.icec[i]="less ice";
        i++;}
        if(n==4){
            cost.icec[i]="low ice";
        i++;}
        if(n==5){
            cost.icec[i]="ice-free";
        i++;}
        if(n==6){
            cost.icec[i]="warm";
        i++;}
        if(n==7){
            cost.icec[i]="hot";
        i++;}

}
 scansweet(int n){
        scanf("%d",&n);
        if(n==1)
            cost.icec[i]="standard";
        if(n==2)
            cost.icec[i]="less sugar";
        if(n==3)
            cost.icec[i]="half sugar";
        if(n==4)
            cost.icec[i]="light sugar";

        if(n==5)
            cost.icec[i]="sugar-free";
}
int main(){
    Cost cost;
    int cash;
    int total=0;
    int choice;
    int N;
    while(1){
    printf("------------MENU---------------\n"
           "| Drink:                      |\n"
           "| 1.Blacktea----------cost:20 |\n"
           "| 2.Greentea----------cost:20 |\n"
           "| 3.Milktea-----------cost:35 |\n"
           "| 4.Coffee------------cost:35 |\n");
    printf("|                             |\n"
           "| Waffle:                     |\n"
           "| 5.honey-------------cost:35 |\n"
           "| 6.Butter------------cost:30 |\n"
           "| 7.cream-------------cost:35 |\n"
           "| 8.Fruit-------------cost:40 |\n"
           "| 9.Exit                      |\n"
           "-------------------------------\n");
    printf("=>");
    scanf("%d",&choice);
    if(choice==9)
        break;
    switch(choice){
     case 1:
         sweet();
         scanf("%d",&sc);
        if(sc==1)
            cost.sweetc[i]="standard";
        if(sc==2)
            cost.sweetc[i]="less sugar";
        if(sc==3)
            cost.sweetc[i]="half sugar";
        if(sc==4)
            cost.sweetc[i]="light sugar";
        if(sc==5)
            cost.sweetc[i]="sugar-free";
         ice();
         scanf("%d",&ic);
        if(ic==1)
            cost.icec[i]="extra ice";
        if(ic==2)
            cost.icec[i]="normal";
        if(ic==3)
            cost.icec[i]="less ice";
        if(ic==4)
            cost.icec[i]="low ice";
        if(ic==5)
            cost.icec[i]="ice-free";
        if(ic==6)
            cost.icec[i]="warm";
        if(ic==7)
            cost.icec[i]="hot";
         cost.Drink[i]="Blacktea";
         cost.money[i]=20;
         i++;
         total=total+20;

    break;
    case 2:
         sweet();
         scanf("%d",&sc);
        if(sc==1)
            cost.sweetc[i]="standard";
        if(sc==2)
            cost.sweetc[i]="less sugar";
        if(sc==3)
            cost.sweetc[i]="half sugar";
        if(sc==4)
            cost.sweetc[i]="light sugar";
        if(sc==5)
            cost.sweetc[i]="sugar-free";
         ice();
         scanf("%d",&ic);
        if(ic==1)
            cost.icec[i]="extra ice";
        if(ic==2)
            cost.icec[i]="normal";
        if(ic==3)
            cost.icec[i]="less ice";
        if(ic==4)
            cost.icec[i]="low ice";
        if(ic==5)
            cost.icec[i]="ice-free";
        if(ic==6)
            cost.icec[i]="warm";
        if(ic==7)
            cost.icec[i]="hot";
         cost.money[i]=20;
         cost.Drink[i]="Greentea";
         i++;
         total+=20;
    break;
    case 3:
         sweet();
         scanf("%d",&sc);
        if(sc==1)
            cost.sweetc[i]="standard";
        if(sc==2)
            cost.sweetc[i]="less sugar";
        if(sc==3)
            cost.sweetc[i]="half sugar";
        if(sc==4)
            cost.sweetc[i]="light sugar";

        if(sc==5)
            cost.sweetc[i]="sugar-free";
         ice();
         scanf("%d",&ic);
        if(ic==1)
            cost.icec[i]="extra ice";
        if(ic==2)
            cost.icec[i]="normal";
        if(ic==3)
            cost.icec[i]="less ice";
        if(ic==4)
            cost.icec[i]="low ice";
        if(ic==5)
            cost.icec[i]="ice-free";
        if(ic==6)
            cost.icec[i]="warm";
        if(ic==7)
            cost.icec[i]="hot";
         cost.Drink[i]="Milktea";
         cost.money[i]=35;
         i++;
         total+=35;

    break;
    case 4:
         sweet();
         scanf("%d",&sc);
        if(sc==1)
            cost.sweetc[i]="standard";
        if(sc==2)
            cost.sweetc[i]="less sugar";
        if(sc==3)
            cost.sweetc[i]="half sugar";
        if(sc==4)
            cost.sweetc[i]="light sugar";
        if(sc==5)
            cost.sweetc[i]="sugar-free";
         ice();
         scanf("%d",&ic);
        if(ic==1)
            cost.icec[i]="extra ice";
        if(ic==2)
            cost.icec[i]="normal";
        if(ic==3)
            cost.icec[i]="less ice";
        if(ic==4)
            cost.icec[i]="low ice";
        if(ic==5)
            cost.icec[i]="ice-free";
        if(ic==6)
            cost.icec[i]="warm";
        if(ic==7)
            cost.icec[i]="hot";
         cost.Drink[i]="Coffee";
         cost.money[i]=35;
         i++;
         total+=35;
    //printf("%d",cost.icec[0]);
    break;
    case 5:
        cost.Order[w]="Honey Waffle";
        cost.Wmoney[w]=35;
        w++;
        total+=35;
        break;
    case 6:
        cost.Order[w]="Butter Waffle";
        cost.Wmoney[w]=30;
        w++;
        total+=30;
        break;
    case 7:
        cost.Order[w]="Cream Waffle";
        cost.Wmoney[w]=35;
        w++;
        total+=+35;
        break;
    case 8:
        cost.Order[w]="Fruit Waffle";
        cost.Wmoney[w]=40;
        w++;
        total+=40;
        break;
    }
}
time_t now;
time(&now);

//printf("%s\n",cost.icec[j]);
//printf("%s\n",cost.sweetc[j]);

printf("Total:%d\n",total);
printf("cash:");
scanf("%d",&cash);

printf("-------------------------------\n");
printl();
printf("\n| %.24s    |\n",ctime(&now));
printf("| Total:%4d                  |\n",total);
printf("| cash:%4d                   |\n",cash);
printf("| change:%3d                  |\n",cash-total);

for(int k=0;k<=i-1;k++){
    printf("| %9s--------------%2d   |\n",cost.Drink[k],cost.money[k]);
    printf("|  %11s                |\n",cost.sweetc[k]);
    printf("|  %11s                |\n",cost.icec[k]);
}
for(int j=0;j<=w-1;j++){
    printf("| %13s---------%2d    |\n",cost.Order[j],cost.Wmoney[j]);}

printf("|                             |\n");
printf("|                             |\n");
printf("-------------------------------");

return 0;}

