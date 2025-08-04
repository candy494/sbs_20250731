#include <iostream>
int main()

// switch - case문 

// 여러가지 선택지 중에서 정확히 일치하는 항목 골라서 설명해줌 

// 예제)

{
	int input = 0;
	printf("자판기 번호를 골라주세요");
	scanf_s("%d", &input);

	switch (input)
	{
	case 1:
		printf("콜라");
		break;
	case 2:
		printf("사이다");
		break;
	default:
		break;
	}

	return 0;
}

// 변수의 유효 범위 

// 스코프가 끝나면 삭제 된다
// } 중괄호가 끝나면 삭제 된다