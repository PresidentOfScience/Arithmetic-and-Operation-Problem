#include <stdio.h>

int main(){
	
	int T = 3;
	double A1,A2,A3,B1,B2,B3;
	scanf("%d", &T);
	scanf("%lf %lf", &A1, &B1);
	scanf("%lf %lf", &A2, &B2);
	scanf("%lf %lf", &A3, &B3);
	
	double rotasi1, rotasi2, rotasi3;
	rotasi1 = A1*B1/360;
	rotasi2 = A2*B2/360;
	rotasi3 = A3*B3/360;
	printf("%.2lf\n", rotasi1);
	printf("%.2lf\n", rotasi2);
	printf("%.2lf\n", rotasi3);
	
	return 0;
	
}
