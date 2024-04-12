#include <stdio.h>

int main(){
	
	int T = 3;
	double A1,A2,A3,B1,B2,B3,C1,C2,C3,D1,D2,D3,sum1,sum2,sum3;
	scanf("%d", &T);
	scanf("%lf %lf %lf %lf", &A1, &B1, &C1, &D1);
	scanf("%lf %lf %lf %lf", &A2, &B2, &C2, &D2);
	scanf("%lf %lf %lf %lf", &A3, &B3, &C3, &D3);
	sum1 = 2*A1/1 + 4*B1/2 + 4*C1/3 + 2*D1/4;
	sum2 = 2*A2/1 + 4*B2/2 + 4*C2/3 + 2*D2/4;
	sum3 = 2*A3/1 + 4*B3/2 + 4*C3/3 + 2*D3/4;
	printf("%.2lf\n", sum1);
	printf("%.2lf\n", sum2);
	printf("%.2lf\n", sum3);
	
	return 0;
	
}
