/*
 ============================================================================
 Name        : star.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,number;
	setbuf(stdout,NULL);
	printf("enter a limit");
	scanf("%d",&number);
	for(i=0;i<=number;i++){
		for(j=0;j<i;j++){
			printf("* ");
		}
		printf("\n");
	}

	}
