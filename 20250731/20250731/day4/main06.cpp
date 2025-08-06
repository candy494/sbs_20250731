#include <iostream>

int main()
{
	/*
	  6. 난수 (랜덤 수)

	  컴퓨터는 기본적으로 랜덤을 못 만듭니다
	  컴퓨터는 정해진 숫자만 사용


	int random = rand();
	printf("%d", random);

	for (int i = 0; i < 10; i++)
	{
		printf("%d", rand());

	}
}
*/
/*
rand 섞여진 값을 하나씩 순차적으로 내보내는 기능
srand() 섞여진 값을 내가 원하는 대로 한번 더 섞게하는 기능
srand(time(NULL)) : 프로그램의 시작시간을 받아오는 것

<맨 앞에  srand(time(NULL))을 하고
그 뒤에 rand()을 하면 랜덤의 정수값을 받아올 수 있다>

0~15 사이의 랜덤 수 뽑기

	int num = rand() % 16;
	
	printf("%d", num);
	
}

15~27 사이인 랜덤 정수 
15-15 ~ 27-15 => 0~ 12

	
	int num = 15+ rand()%13;
	printf("%d", num);
	*/

/* 스무고개 
컴퓨터가 1~100까지 랜덤한 수 저장
사용자는 맞출 기회 20번
사용자가 입력한 수보다 랜덤한수가 크면 up
작으면 down 
같으면  게임 승리 ㅊㅊ
출력 
20번을 소모할 동안 랜덤 수 맞추지 못하면 패배
*/