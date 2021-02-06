/*
 ============================================================================
 Name        : average.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float number1,number2,number3,average;
	setbuf(stdout,NULL);
	printf("enter 3 numbers");
	scanf("%f%f%f",&number1,&number2,&number3);
	average=(number1+number2+number3)/3;
	printf("average is : %f",average);

	return EXIT_SUCCESS;
}
