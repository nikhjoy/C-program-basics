/*
 ============================================================================
 Name        : if.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int number;
	setbuf(stdout,NULL);
	printf("enter a numbers");
	scanf("%d",&number);
	if(number>0){
		printf("number is positive");
	}else{
		printf("number is negative");
	};


	return EXIT_SUCCESS;
}
