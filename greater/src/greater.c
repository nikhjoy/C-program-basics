/*
 ============================================================================
 Name        : greater.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int number1,number2;
	setbuf(stdout,NULL);
	printf("enter 2 numbers");
	scanf("%d%d",&number1,&number2);
	if(number1>number2){
		printf("%d is greater",number1);
	}else{
		printf("%d is greater",number2);
	};


	return EXIT_SUCCESS;
}
