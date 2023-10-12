#include <stdio.h>
#include <math.h>

int main(){
	
	int a,b,c;
	printf("enter a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);
    
	
	float p;
	p = (a + b +c)/2;
	double s;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("s = %.2f", s);
	
	return 0;
}