#include <stdio.h>
#include <stdlib.h>


void addUser(){

	printf("Im here bitch added\n");
}


void removeUser(){

	printf("Im here bitch removed\n");
}


void choose1(){
	int innerInput;
	printf("Please enter a number\n");
	printf("1-Add a user\n2-Remove a user\n");
	scanf("%d",&innerInput);

	switch(innerInput){

		case 1:
		addUser();
		break;

		case 2:
		removeUser();
		break;

		default:
		printf("wrong input");

		}

}
