#include <stdio.h>
int main(void) {
	double x, y;
	printf("x�� ���� �Է��Ͻÿ�: "); scanf_s("%lf", &x);
	if (x <= 0) { y = x * x * x * -9 * x + 2;  printf("f(x)�� ���� %lf \n", y); }
	else if (x > 0) { y = 7 * x + 2;  printf("f(x)�� ���� %lf \n", y); }
	else  printf("�߸� �Է��ϼ̽��ϴ�. \n");
	char z;
	printf("���ڸ� �Է��Ͻÿ� : "); 
	
	scanf_s(" %c", &z);
 switch (z) {
 case 'R': printf("Rectangle"); break;
 case 'T': printf("Triangle"); break; 
 case 'C': printf("Circle"); break;
 default : printf("Unknown");}
 return 0;
}
