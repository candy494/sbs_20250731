#include <iostream> 
int main()
{
	int num = 0;

	printf("정수를 입력하시오; ");
	scanf_s("%d", &num);

	if (num % 2 == 0) {
		printf("입력한 수가 짝수입니다");
	}
	else {
		printf("입력한 수가 홀수입니다");
	}

	return 0;
}
