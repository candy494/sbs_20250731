#include <iostream>
int main()

// 1부터 입력받은 정수까지 3의배수이면서 5의 배수인 값들의 합 구하기

// 수도 코드
// input(number)
//for(1,i,to number)
//  if ( i is 3의배수 and 5의 배수)
//      sum += I
// print(sum)

{
	int number = 0;
	int sum = 0;
	printf("number를 입력: ");
	scanf_s("%d", &number);

	for (i=0; i<= number; i++)
		if(number%3==0 && number%5==0)
			sum+=i
}