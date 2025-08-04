#include <iostream> 
int main()
{
	int num = 0;

	printf("정수를 입력하시오; ");
	scanf_s("%d", &num);

	if (num % 3 == 0 && num % 5 == 0) {
		printf("정수가 3의 배수이면서 5의 배수다 ");
	}

	else {
		printf("다른 정수를 입력하시오 ");

	}

	return 0;
}