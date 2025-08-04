#include <iostream> 
int main()
{
	int height = 0;
	int age = 0;

	printf("키를 입력: ");
	scanf_s("%d", &height);

	printf("나이를 입력: ");
	scanf_s("%d", &age);

	if (age >= 12 && height >= 140) {
		printf("놀이기구 탑승 가능");
	}

	else {
		printf("놀이기구 탑승 불가");
	}

	return 0;
}