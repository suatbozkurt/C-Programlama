//C ile Programlama
//Bolum 2

//Suat Bozkurt
//24.02.2021

#include <stdio.h>

int main(void){

	int num1;
	int num2;
	
	printf("Enter two integers, and Iwill tell you\n");
	printf("the relationships they satisfy\n");
	
	scanf("%d%d",&num1,&num2);
	
	if(num1 == num2) {		
		printf("%d is egual to %d\n", num1, num2);
	}
	
	if(num1 != num2) {		
		printf("%d is  not egual to %d\n", num1, num2);
	}	
	
	if(num1 < num2) {		
		printf("%d is less than %d\n", num1, num2);
	}
	
	if(num1 > num2) {		
		printf("%d is greater than %d\n", num1, num2);
	}

	if(num1 <= num2) {		
		printf("%d is less than or equal to %d\n", num1, num2);
	}
    if(num1 >= num2) {		
		printf("%d is greater  than  or equal to %d\n", num1, num2);
	}
		
}
