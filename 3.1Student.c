//C Programlama B�l�m 3

//Suat Bozkurt 

#include <stdio.h>

int main (void){
	
	
	unsigned int passes = 0 ;
	unsigned int failures = 0 ;
	unsigned int student = 1 ;
	
	int result ;


	while ( student <= 10 ){
		
		printf("%s","enter result (1 = pass , 2 = fail ):");
		scanf("%d", &result );
		
		if ( result == 1){
			passes = passes + 1;
		}
		else {
			failures = failures + 1 ;
		}
		
		
		student = student + 1 ;
	}
	
	
	printf("Passes %u",passes);
	printf("Failed %u",failures);
	
	if( passes > 8){
		puts("Bonus to instructor");
	}
} 
