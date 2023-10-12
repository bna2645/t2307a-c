#include <stdio.h>

int main(){
	
	int num1, num2;
	printf("enter num1, num2 ");
	scanf("%d%d", &num1, &num2);
	
	if(num1 == 0|| num2 == 0){
		printf("invalid");
	}
	
	if(num1 % num2 == 0){
		printf("%d la uoc cua %d", num2, num1);
	}
	else if(num2 % num1 == 0){
		printf("%d la uoc cua %d", num1, num2);
	}
	else{
		printf("2 so khong la uoc cua nhau");
	}
	
	
	return 0;
}