#include <stdio.h>

int main(){
	
	double L, B, H, A;
	scanf("%lf %lf %lf", &L, &B, &H);
	A = 2*B*H/2 + 3*L*B;
	printf("%.3lf\n", A);
	
	return 0;
	
}
