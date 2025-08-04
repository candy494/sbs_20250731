#include <iostream>
int main()

{
	int num = 0;

	printf("정수를 입력하시오; ");
	scanf_f("%d", &num);

	if(num >=10 && num <=20) {
		printf("조건에 부합하는 수이다");
	}

	else {
		printf("조건에 부합하지 않는다");
	}
}