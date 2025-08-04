#include <iostream>
int main()
{

	int ham = 0;
	printf("햄버거가 메뉴에 있다면 1 없다면 0을 입력하라");
	scanf_s("%d", &ham);

	if (ham == 1) {
		printf("햄버거를 먹어라");
	}
	else {
		printf("김밥을 먹어라");
	}

	return 0;

}

