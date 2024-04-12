#include <stdio.h>

int main(){
	
	long int N;
	long int prob = 1;
	scanf("%ld", &N);
	for(int i=1; i<=N; i++){
		prob *= 2;
	}
	prob -= 1;
	printf("%ld\n", prob);
	
	return 0;
}
