#include <iostream>
int main()

// switch - case�� 

// �������� ������ �߿��� ��Ȯ�� ��ġ�ϴ� �׸� ��� �������� 

// ����)

{
	int input = 0;
	printf("���Ǳ� ��ȣ�� ����ּ���");
	scanf_s("%d", &input);

	switch (input)
	{
	case 1:
		printf("�ݶ�");
		break;
	case 2:
		printf("���̴�");
		break;
	default:
		break;
	}

	return 0;
}

// ������ ��ȿ ���� 

// �������� ������ ���� �ȴ�
// } �߰�ȣ�� ������ ���� �ȴ�