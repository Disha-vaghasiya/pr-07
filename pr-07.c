/*Q.1 Write a menu-driven program to implement arithmetic operations such as +, -, *, /, and % using UDF, 
switch case, and looping. Make sure that the program is endless until a certain letter is pressed.*/

#include<stdio.h>

 int sum(int x, int y){
	return x+y;
}

int subtraction(int x, int y){
	return x-y;
}

int multiplication(int x, int y){
	return x*y;
}

int division(int x, int y){
	return x/y;
}

int module(int x, int y){
	return x%y;
}






void main(){
	 int  choice;
	 int a,b;
	 int ans;
	
	 
	printf("Enter the First number:- ");
	scanf("%d",&a);
	printf("Enter the Second number:- ");
	scanf("%d",&b);
	
		
		do{
					
		printf(" Press 1 for + \n");
		printf("Press 2 for - \n");
		printf("Press 3 for * \n");
		printf("Press 4 for / \n");
		printf("Press 5 for % \n ");
		printf("Press 0 for the exit \n");
		
		printf("Enter your choice:- ");
		scanf("%d",& choice); 
		
			switch(choice) {
				case 1: ans=sum(a,b);
				printf("sum of first and sencond number is %d\n", ans);
				break;
				case 2:ans=subtraction(a,b);
				printf("subtraction of first and sencond number is %d\n", ans);
				break;
						
						case 3:ans=multiplication(a,b);
				printf("multiplication of first and sencond number is %d\n", ans);
				break;
						
						case 4:ans=division(a,b);
				printf("division of first and sencond number is %d\n", ans);
				break;
						
						case 5:ans=module(a,b);
				printf("module of first and sencond number is %d\n", ans);
				break;
						
					
						
						   	}
		}while(choice!=0);
   		
}
