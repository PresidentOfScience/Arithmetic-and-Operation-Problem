#include <stdio.h>

int main(){
	
	long int A1,A2,A3,B1,B2,B3,C1,C2,C3,D1,D2,D3;
	scanf("(%ld+%ld)x(%ld-%ld)", &A1, &B1, &C1, &D1); getchar();
	scanf("(%ld+%ld)x(%ld-%ld)", &A2, &B2, &C2, &D2); getchar();
	scanf("(%ld+%ld)x(%ld-%ld)", &A3, &B3, &C3, &D3); getchar();
	printf("%ld %ld %ld\n", (A1+B1)*(C1-D1), (A2+B2)*(C2-D2), (A3+B3)*(C3-D3));
	
	return 0;
	
}
