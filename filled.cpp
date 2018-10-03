#include<stdio.h>
void prchar(char c,int n){
     for(printf("%c",c);)
}
int main(){

int choice;
int height,width,type,i,j;



while(1){
    printf("main menu\n");
    printf("1. rectangle\n");
    printf("2. vertical triangle\n");
    printf("3. tsosceles triangle\n");
    printf("4. exit\n");
    printf("=> ");
    scanf("%d", &choice);

        if(choice==4)break;
        switch(choice)
        {
            case 1:
                printf("enter height width: ");
                scanf("%d %d", &height, &width);
                drawRect(height width);
                    for(int i=1;i<=height;i++){
                    for(int j=1;j<=width;j++){
                        if(i==1 || i==height || j==1 || j==width)
                            printf("*");
                        else
                            printf(" ");
                                             }
                    printf("\n");
                                              }


         case 2:
                printf("enter height, type, filled: ");
                scanf("%d %d %d", &height, &type, &filled);
                drawVertTri(height,type,filled);

        void drawverttri(int height, int type, int filled){

        switch(type){
        case 1:
            if(filled){
                for(int i=1;i<=height;i++){
                    prchar('*',i);
                    printf("\n");
                }
                }else{
                    for(int i=1;i<=height;i++){
                        if(i==1 || i==height){
                            prchar('*',i);
                        }else{
                            printf("*");
                            prchar(' ',i-2);
                            printf("*");
                        }
                        printf("\n");
                    }

                   }
            break;

        case 2:
            break;

        case 3:
            break;

        case 4:
            break;
}
}


                break;


}

}

}
}



return 0;
}
}
