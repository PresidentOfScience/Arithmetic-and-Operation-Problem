#include <stdio.h>

int main(){
	
	double T, Ut, Ua, score;
	scanf("%lf %lf %lf", &T, &Ut, &Ua);
	score = 20*T/100 + 30*Ut/100 + 50*Ua/100;
	printf("%.2lf\n", score);
	
	return 0;
	
}
