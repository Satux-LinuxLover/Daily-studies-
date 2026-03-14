#include <stdio.h>

/*these are just programming projects for learning if statments
feel free to learn from them*/

int main(void){

	//Project number 1 : number digit

	int number;
	printf("Enter the number : ");
	scanf("%d",&number);

		if (number <= 9 && number >= 0){
			printf("this number have 1 digit \n");}
		else if (number >= 10 && number <= 99){
			printf("this number has 2 digits\n");}
		else if (number >= 100 && number <= 999){
			printf("this number have 3 digit\n");}
		else if (number >= 1000){
			printf("this number have more than 3 digit\n");}

		else if (number >= -9 && number <= -1){
			printf("this number is negative and have 1 digit \n");}
		else if (number <= -10 && number >= -99){
			printf("this number is negative and has 2 digits\n");}
		else if (number <= -100 && number >= -999){
			printf("this number is negative and have 3 digit\n");}
		else if (number <= -1000){
			printf("this number have more than 3 digit\n");}
		else
			printf("this isnt a real nunmber\n");


		//Project Number 2 european to usa time converter
		
		int hours, minutes;

		printf("Enter the time in normal clock xx:xx ");
		scanf("%d:%d",&hours,&minutes);

		if (hours >= 0 && hours <= 12 && minutes <= 59){
			printf("The time is %d:%dam :\n",hours,minutes);}
		else if (hours > 12 && hours <= 24 && minutes <= 59){
			printf("The time is %d:%dpm \n",(hours - 12),minutes);}
		else 
			printf("This isnt a real time\n");

			//Project number 3 : date detector


		int Fdd ,Fmm ,Fyy; // F stands for first
		int Sdd ,Smm ,Syy;
		int first_date ,second_date;
		
			printf("Enter the first date day/month/year ");
			scanf("%2d/%2d/%4d",&Fdd,&Fmm,&Fyy);
			printf("Enter the second date day/month/year ");
			scanf("%2d/%2d/%4d",&Sdd,&Smm,&Syy);
			
					first_date = (Fyy * 10000) + (Fmm * 100) + Fdd;
					second_date = (Syy * 10000) + (Smm * 100) + Sdd;
					
		if (first_date < second_date){
			printf("The year %d/%d/%d is before the second year\n",Fdd,Fmm,Fyy);}
		else if (second_date < first_date){
			printf("The year %d/%d/%d is before the first year\n",Sdd,Smm,Syy);}
		else if (first_date == second_date){
			printf("Both years are equall \n");}
		else
			printf("this isnt a real year \n");




	return 0;
}

