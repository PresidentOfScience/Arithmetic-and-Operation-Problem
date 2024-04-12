#include <stdio.h>

int main(){
	
	char course_code1[12],course_code2[12],course_code3[12],course_code4[12],course_code5[12];
	int HH1,MM1,HH2,MM2,HH3,MM3,HH4,MM4,HH5,MM5,HH6,MM6,HH7,MM7,HH8,MM8,HH9,MM9,HH10,MM10;
	scanf("%s %d:%d-%d:%d", course_code1, &HH1, &MM1, &HH2, &MM2);
	scanf("%s %d:%d-%d:%d", course_code2, &HH3, &MM3, &HH4, &MM4);
	scanf("%s %d:%d-%d:%d", course_code3, &HH5, &MM5, &HH6, &MM6);
	scanf("%s %d:%d-%d:%d", course_code4, &HH7, &MM7, &HH8, &MM8);
	scanf("%s %d:%d-%d:%d", course_code5, &HH9, &MM9, &HH10, &MM10);
	printf("%s %.2d:%.2d-%.2d:%.2d\n", course_code1, HH1-1, MM1, HH2-1, MM2);
	printf("%s %.2d:%.2d-%.2d:%.2d\n", course_code2, HH3-1, MM3, HH4-1, MM4);
	printf("%s %.2d:%.2d-%.2d:%.2d\n", course_code3, HH5-1, MM5, HH6-1, MM6);
	printf("%s %.2d:%.2d-%.2d:%.2d\n", course_code4, HH7-1, MM7, HH8-1, MM8);
	printf("%s %.2d:%.2d-%.2d:%.2d\n", course_code5, HH9-1, MM9, HH10-1, MM10);
	
	return 0;
}
