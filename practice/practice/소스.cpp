#include <stdio.h>
int main(void) {
	double x, y;
	printf("x의 값을 입력하시오: "); scanf_s("%lf", &x);
	if (x <= 0) { y = x * x * x * -9 * x + 2;  printf("f(x)의 값은 %lf \n", y); }
	else if (x > 0) { y = 7 * x + 2;  printf("f(x)의 값은 %lf \n", y); }
	else  printf("잘못 입력하셨습니다. \n");
	char z;
	printf("문자를 입력하시오 : "); 
	
	scanf_s(" %c", &z);
 switch (z) {
 case 'R': printf("Rectangle"); break;
 case 'T': printf("Triangle"); break; 
 case 'C': printf("Circle"); break;
 default : printf("Unknown");}
 return 0;
}
