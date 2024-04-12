#include <stdio.h>

int main(){
	
	long int N, total, bonus;
	total = 0;
	bonus = 0;
	scanf("%ld", &N);
	
	for(int i=1; i<=N; i++)
	{
		total = total + 100 + bonus;
		bonus = bonus + 50;
	}
	printf("%ld\n", total);
	
	return 0;
}
