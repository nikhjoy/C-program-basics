/*
 ============================================================================
 Name        : search.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,i,values[100],searchKey,flag=0;
	setbuf(stdout,NULL);
	printf("enter the limit");
	scanf("%d",&limit);

	printf("enter the values");
	for(i=0;i<limit;i++){
		scanf("%d",&values[i]);
	}

	printf("please enter the search key");
	scanf("%d",&searchKey);

	for(i=0;i<limit;i++){
		if(searchKey==values[i]){
			flag=1;
			break;
		}
	}

	if(flag==1){
		printf("value found at position %d", i+1);
	}else{
		printf("value not found in the list");
	}

	return EXIT_SUCCESS;
}
