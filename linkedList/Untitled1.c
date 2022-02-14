#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//prtotype Kareem
//adding a new user
void addUser();
//removing an exited user
void removeUser();
// a fork if user choosed to add or remove a user
void choose1();
//end of my prototype


int main () {

while(1==1){

	int input;
	printf("Please enter a number\n");
	printf("1-Add/Remove a user\n2-Add/Remove a group\n3-Change infromation of users\n4-Change infromtion\n5- Assign a specific user to a groups\n0-Exit\n");
	scanf("%d",&input);

	switch(input){

		case 1:
		choose1();
		break;

		case 2:
		printf("you are 2\n");
		break;

		case 3:
		printf("you are 3\n");
		break;

		case 4:
		printf("you are 4\n");
		break;

		case 5:
		printf("you are 5\n");
		break;

		case 0:
		return 0;
		break;

		default :
		printf("Wrong input\n");
		break;

	}




}

return 0;}



void addUser(){

	char command[100]="sudo useradd ";
	char name[50];
	printf("Please enter the new user name\n");
	scanf("%s",&name);
	strcat(command,name);
	system(command);
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
