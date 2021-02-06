/*
 ============================================================================
 Name        : array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,i,values[100],j,temp;
	setbuf(stdout,NULL);
	printf("enter the limit");
	scanf("%d",&limit);

	printf("enter the values");
	for(i=0;i<limit;i++){
		scanf("%d",&values[i]);
	}

	for(i=0;i<limit-1;i++)
	{
		for(j=i+1;j<limit;j++){
			if(values[j]<values[i]){
				temp=values[j];
				values[j]=values[i];
				values[i]=temp;
			}
		}
	}

	printf("sorted array is:");
	for(i=0;i<limit;i++){
		printf("%d\t",values[i]);
	}

	return EXIT_SUCCESS;
}
