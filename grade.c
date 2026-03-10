#include <stdio.h>
int main(void){
	int grade;
	printf("Enter your grade x/20 ");
	scanf("%d",&grade);
	if (grade < 0){
		printf("this is a bellow 0 grade its impossible\n");}
	else if (grade < 5){
		printf("This is a horrible grade\n");}
	else if (grade > 5 &&  grade < 10){
		printf("This is a bellow average grade\n");}
	else if (grade >= 10 && grade <= 13){
		printf("This is average grade\n");}
	else if (grade > 13 && grade <= 18){
		printf("this is very good\n");}
	else if (grade == 19 || grade == 20){
		printf("this is excellent grade\n");}
	else if (grade > 20){
		printf("this is above 20 its impossible : \n");}
	 else 
		printf("this isnt a real number\n");
return 0; }
