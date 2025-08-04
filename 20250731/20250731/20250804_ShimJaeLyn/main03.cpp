#include <iostream>
int main()
//프로그래밍하면서 가장 많이 쓰이는 문법 
// 조건문 

//if, else if, else : 만약 ~ 라면 ~한다

// if  (a)  
// a가 참이면 내용을 실행

// 예제 
{
	int input = 0;
	printf("지금 밖에 비가 온다면 0, 비가 오지않은면 1을 입력해주세요 : ");
	scanf_s("%d", &input);

	int input2 = 0;
	printf("사용자에게 우산이 있다면 0, 없다면 1을 입력해주세요");
	scanf_s("%d", &input2);


	if (input == 0 && input2==1)
	{
		printf("외츨을 삼가하세요");
	}
	
	return 0;
}
// 실습 점심에 햄버거 있으면 햄버거 먹고 아니면 김밥을 먹는다 
// 돈이 많거나 시간이 많은면 여행을 간다 
// 시험점수가 90이상이면 a
// 숙제를 안했으면 놀면 안된다 

