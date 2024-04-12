#include <stdio.h>

int main(){
	
	int T = 3;
	double P1, N1, P2, N2, P3, N3;
	scanf("%d", &T);
	scanf("%lf %lf", &P1, &N1);
	scanf("%lf %lf", &P2, &N2);
	scanf("%lf %lf", &P3, &N3);
	printf("%.2lf\n", P1*N1/100);
	printf("%.2lf\n", P2*N2/100);
	printf("%.2lf\n", P3*N3/100);
	
	return 0;
	
}
