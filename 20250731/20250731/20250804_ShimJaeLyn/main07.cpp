#include <iostream> 
int main()
{
	int num = 0;

	printf("������ �Է��Ͻÿ�; ");
	scanf_s("%d", &num);

	if (num % 2 == 0) {
		printf("�Է��� ���� ¦���Դϴ�");
	}
	else {
		printf("�Է��� ���� Ȧ���Դϴ�");
	}

	return 0;
}
