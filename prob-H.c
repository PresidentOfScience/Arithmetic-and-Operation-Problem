#include <stdio.h>

int main(){
	
	int a1,a2,a3,b1,b2,b3,c1,c2,c3,d1,d2,d3;
	scanf("%d %d %d %d", &a1, &b1, &c1, &d1);
	scanf("%d %d %d %d", &a2, &b2, &c2, &d2);
	scanf("%d %d %d %d", &a3, &b3, &c3, &d3);
	
	double total1,total2,total3;
	total1 = 2*a1 + 2*b1 + 2*c1 + d1;
	total2 = 2*a2 + 2*b2 + 2*c2 + d2;
	total3 = 2*a3 + 2*b3 + 2*c3 + d3;
	printf("%.2lf\n", total1);
	printf("%.2lf\n", total2);
	printf("%.2lf\n", total3);
	
	return 0;
	
}
