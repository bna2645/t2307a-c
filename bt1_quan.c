#include <stdio.h>

int main(){
	int n;int arr[10];
	printf("enter n: ");
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		printf("enter number: ");
			scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(arr[i] > arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	
	int max = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] > max){
		max = arr[i];
	}	
	}printf("max = %d", max);

	
	
	return 0;
}