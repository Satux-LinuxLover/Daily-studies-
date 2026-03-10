 #include <stdio.h>
int main(void){
	int grade;
	printf("Enter your grade x/20 : \n");
	scanf("%d",&grade);
	switch (grade) {
		case 1: case 2:	case 3: case 4:	case 5:  printf("this is a bad grade\n");
			break;
		case 6: case 7: case 8: case 9: printf("bellow average grade \n");
			break;
		case 10: case 11: case 12: case 13: printf("average grade\n");
			break;
		case 14: case 15: case 16: case 17: printf("exellent grade\n");
			break;
		case 18: case 19: case 20: printf("this is a very high grade\n");
			break;
		default: printf("this grade is non existence \n");
			 break; }
	
return 0; }
