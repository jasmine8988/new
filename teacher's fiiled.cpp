#include<stdio.h>

void prchar(char c, int n){
	for(int i=1;i<=n;i++)
	printf("%c", &c);
}

void drawrect(int height, int width, int filled){
	if(filled){
		for(int i=1;i<=height;i++){
			prchar('*', width);
			printf("\n");
		}
	}
	else{
		for(int i=1;i<=height;i++){
			for(int j=1;j<=width;j++){
			
			if(i==1 || i==height || j==1 || j==width)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}

}

void drawverttri(int height, int type, int filled){
	switch(type)
	{
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
			}
			printf("\n");
		}
		break;
	}
	case 2:
		
		
		
		
	break;
	case 3:
		
		
		
		
		
		
	break;
	case 4:
		
		
		
		
	break;
}
}

int main(){
	
	int choice;height;width;type;filled;i;j;
	
	while(1){
		
		printf("main menu\n");
		printf("1. rectangle\n");
		printf("2. vertical triangle\n");
		printf("3. tsosceles triangle\n");
		printf("4. exit");
		printf("=>");
		scanf("%d", &choice);
		if(choice==4)
		break;
		switch(choice){
			case 1:
				printf("enter height , width and filled: ");
				scanf("%d %d %d", &height, &width, &filled);
				drawrect(height,width,filled);
				break;
			case 2:
				printf("enter height , type and filled: ");
				scanf("%d %d %d", &height, &type, &filled);
				drawverttri(height,type,filled);
				break;
		}
	}
	return 0;
}
