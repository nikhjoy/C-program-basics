//============================================================================
// Name        : function.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include <stdio.h>
#include <stdlib.h>

int sum(int,int);
int main(void) {
	setbuf(stdout,NULL);
	int a,b,res;
	printf("enter the 2 numbers");
	scanf("%d%d",&a,&b);
	res=sum(a,b);
	printf("sum is: %d",res);
	return EXIT_SUCCESS;
}

int sum(int num1,int num2){
	int result;
	result=num1+num2;
	return result;
}

