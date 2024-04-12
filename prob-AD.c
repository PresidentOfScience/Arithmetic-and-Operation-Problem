#include <stdio.h>

int main(){
	
	double Ph, M, Pu, total;
	scanf("%lf %lf %lf", &Ph, &M, &Pu);
	total = 20*Ph/100 + 30*M/100 + 50*Pu/100;
	printf("%.2lf\n", total);
	
	return 0;
	
}
