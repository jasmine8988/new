#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    float height,m,weight,BMI;
	printf("enter your height(cm): ");
	scanf("%f",&height);
	printf("enter your weight(kg): ");
	scanf("%f",&weight);
	
	m=height/100;
	BMI=weight/(m*m);
	printf("BMI=%.1f\n\n",BMI);
	
	if(BMI<18.5)
	printf("體重過輕");
	
	if(BMI>=18.5 && BMI<24)
	printf("體重適中");
	
	if(BMI>=24 && BMI<27)
	printf("過重");
	
	if(BMI>=27 && BMI<30)
	printf("輕度肥胖");
	
	if(BMI>=30 && BMI<35)
	printf("中度肥胖");
	
	if(BMI>=35)
	printf("重度肥胖");
	
	
	return 0;

	
   
}
