#include <iostream>
int main()
{



/*
4. while 반복문

while ( 조건식 ) {본문} : ~하는 동안 본문을 반복한다 
본문안에서 조건식을 false시키는 행동 해야만 한다 => 안그러면 무한루프에 빠짐 

for문과 while문은 서로 100% 문법 충당 가능

while (조건식) 
	{ 

	  본문 

	  }

for (초기식; 조건식; 증감식;)

	{
	     본문
	}

*/

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", i);
	}

	int i = 0;
	while (i < 10)
	{
		printf("%d\n", i);
		i++;
	}





