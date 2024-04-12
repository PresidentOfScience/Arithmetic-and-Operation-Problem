#include <stdio.h>

int main(){
	
	int T = 3;
	double C1, C2, C3;
	scanf("%d", &T);
	scanf("%lf", &C1);
	scanf("%lf", &C2);
	scanf("%lf", &C3);
	printf("%.2lf %.2lf %.2lf\n", 0.8*C1, 1.8*C1+32, C1+273);
	printf("%.2lf %.2lf %.2lf\n", 0.8*C2, 1.8*C2+32, C2+273);
	printf("%.2lf %.2lf %.2lf\n", 0.8*C3, 1.8*C3+32, C3+273);
	
	return 0;
	
}
