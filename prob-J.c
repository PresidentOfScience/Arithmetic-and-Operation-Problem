#include <stdio.h>

int main(){
	
	double A, B, prob;
	scanf("%lf %lf", &B, &A);
	prob = A*100/B;
	printf("%.4lf%%\n", prob);
	
	return 0;
}
