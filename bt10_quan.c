#include <stdio.h>

int main(){
	
	int arr[1000];
	int n; scanf("%d", &n);
	
	for(int i = 0; i < n; i += 2){
		printf("%d   ", i);
	}
	
	return 0;
}