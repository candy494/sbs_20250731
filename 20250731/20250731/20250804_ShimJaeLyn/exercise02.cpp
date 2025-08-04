#include <iostream> 
int main()

{


	int money = 0;
	int time = 0;

	printf("시간이 있다면 0을 없다면 1을 입력");
	scanf_s("%d", &time);

	printf("돈이 있다면 0 0없다면 1을 입력");
	scanf_s("%d", &money);

	if (time == 0 && money == 0) {
		printf("여행 ㄱㄱ");
	}
	else {
		printf("여행 ㄴㄴ");
	}

	return 0;

}
