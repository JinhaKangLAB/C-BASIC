#include <stdio.h>
int main(void) {

	float radius;
	float area;

	printf("���� �������� �Է��Ͻÿ� : ");
	scanf_s("%f", &radius);


	area = 3.141592 * radius * radius;
	printf("���Ǹ���: %f\n", area);

	return 0;
}