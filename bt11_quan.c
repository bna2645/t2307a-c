#include <stdio.h>
#include <math.h>

int main(){
	for(int i = 0; i < 5; i++){
	char name[5][30];
	printf("enter name: ");
	gets(name[i]);
	}
	
	for(int i = 0; i < 5; i++){
		printf("%s\n", name[i]);
	}
	return 0;
}