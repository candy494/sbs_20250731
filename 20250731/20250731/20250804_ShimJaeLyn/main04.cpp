#include <iostream>
int main()

// ���ǹ� 

// else if 

// ��� 
// if 
// else if 
// else

//���� 

{
	int point = 0;
	printf("������ �Է����ֿ�:");
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
		printf("���� ����");

	}
	return 0;
}
