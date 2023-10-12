#include <stdio.h>

int main(){
	
	float p;
	float n,r;
	printf("nhap tien von p: ");
	scanf("%f", &p);
	
	printf("nhap so nam: ");
	scanf("%f", &n);
	
	printf("nhap lai xuat: ");
	scanf("%f", &r);
	
	double tienlai;
	tienlai = (p*n*r)/100;
	printf("tien lai cua ban la %.2f", tienlai);
	
	return 0;
}