#include <iostream>
int main()

// 조건문 

// else if 

// 사용 
// if 
// else if 
// else

//예제 

{
	int point = 0;
	printf("성적을 입력해주오:");
	scanf_s("%d", &point);


	if (point >= 90) {
		printf("A");
	}
	else if (point < 90 && point >= 80) {
		printf("B");
	}

	else if (point < 80 && point >= 70) {
		printf("C");
	}

	else if (point < 70 && point >= 60) {
		printf("D");
	}

	else {
		printf("공부 ㄱㄱ");

	}
	return 0;
}
