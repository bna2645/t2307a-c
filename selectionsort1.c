#include<stdio.h>

int main(){
	
	int n;
	printf("nhap vao so gia tri ban muon ");
	scanf("%d", &n);
	
	int arr[n];
	
	for(int i = 0; i < n; i++){
	    printf("nhap vao cac so ");
		scanf("%d", &arr[i]);
	}
	
	int temp = 0;
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}