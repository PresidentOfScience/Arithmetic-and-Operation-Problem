#include <stdio.h>

int main(){
	
	double N1,N2,N3,N4,P1,P2,P3,P4;
	scanf("%lf %lf", &N1, &P1);
	scanf("%lf %lf", &N2, &P2);
	scanf("%lf %lf", &N3, &P3);
	scanf("%lf %lf", &N4, &P4);
	printf("$%.2lf\n", 100*P1/(100-N1));
	printf("$%.2lf\n", 100*P2/(100-N2));
	printf("$%.2lf\n", 100*P3/(100-N3));
	printf("$%.2lf\n", 100*P4/(100-N4));
	
	return 0;
	
}
