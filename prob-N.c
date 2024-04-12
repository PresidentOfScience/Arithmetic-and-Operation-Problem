#include <stdio.h>

int main(){
	
	double X, Y, disc;
	scanf("%lf %lf", &X, &Y);
	disc = (X-Y)*100/X;
	printf("%.2lf%%\n", disc);
	
	return 0;
	
}
