#include <iostream> 
int main()
{
	int num = 0;

	printf("������ �Է��Ͻÿ�; ");
	scanf_s("%d", &num);

	if (num % 3 == 0 && num % 5 == 0) {
		printf("������ 3�� ����̸鼭 5�� ����� ");
	}

	else {
		printf("�ٸ� ������ �Է��Ͻÿ� ");

	}

	return 0;
}