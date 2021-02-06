/*
 ============================================================================
 Name        : function.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */



#include <stdio.h>
#include <stdlib.h>

int sum();
int main(void) {
	int k;
	setbuf(stdout,NULL);
	k=sum();
	printf("sum is: %d",k);
	return EXIT_SUCCESS;
}

int sum(){
	int a,b,result;
	printf("enter the 2 numbers");
	scanf("%d%d",&a,&b);
	result=a+b;
	return result;
}
