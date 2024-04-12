#include <stdio.h>

int main(){
	
	double x, y, persen;
	scanf("%lf %lf", &x, &y);
	persen = x*100/y;
	printf("%.2lf%%\n", persen);
	
	return 0;
}
