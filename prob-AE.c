#include <stdio.h>

int main(){
	
	long int N, poin, bonus;
	poin = 0;
	bonus = 0;
	scanf("%ld", &N);
	
	for(int i=1; i<=N; i++)
	{
		poin = poin + 100 + bonus;
		bonus = bonus + 50;
	}
	printf("%ld\n", poin);
	
	return 0;
}
