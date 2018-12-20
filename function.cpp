#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int rand31() {
    return ((rand()<<12)+(rand()<<1)+(rand()&1));
}
void printl(){

    srand(time(NULL));
     char a[]={'A','B','C','D','E','F','G','H','I','J',
    'K','L','M','N','O','P','Q','R','S'
    ,'T','U','V','W','X','Y','Z'};
	printf("%c%c-",a[rand()%26],a[rand()%26]);
	printf("%08d",rand31()%100000000);

}
int main(){

printl();

return 0;}
