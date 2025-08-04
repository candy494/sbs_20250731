#include <iostream> 
int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	printf("첫번째 정수를 입력하시오 ");
	scanf("%d", &num1);

	printf("두번째 정수를 입력하시오 ");
	scanf("%d", &num2);

	printf("세번째 정수를 입력하시오 ");
	scanf("%d", &num3);

	if (num1 == num2 && num1 == num3) {
		printf("모두 같음")
	}

	else if (num1 == num2 && num1 != num3) {
	printf("두개만 같움");
	}

	else if (num1 == num3 && num2 != num3) {
		printf("두개만 같움");
	}

}