#include <iostream> 
int main()
{
	int height = 0;
	int age = 0;

	printf("Ű�� �Է�: ");
	scanf_s("%d", &height);

	printf("���̸� �Է�: ");
	scanf_s("%d", &age);

	if (age >= 12 && height >= 140) {
		printf("���̱ⱸ ž�� ����");
	}

	else {
		printf("���̱ⱸ ž�� �Ұ�");
	}

	return 0;
}