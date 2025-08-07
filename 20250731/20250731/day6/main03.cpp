#include <iostream>

int main()
{
	/* 배열의 가장 기초적인 활용
	   배열은 주로 for문이랑 같이 사용

	   int arr[3] = {0,};
	   arr[0]=0;
	   arr[1]=1;
	   arr[2]=2;

	   arr[3]=3; => 없음

	   */
	   /*void example1()
	   {
		   int arr[10] = { 0, };
		   arr[0] = 0;
		   arr[1] = 1;
		   arr[2] = 2;
		   arr[3] = 3;
		   arr[4] = 4;
		   arr[5] = 5;
		   arr[6] = 6;
		   arr[7] = 7;
		   arr[8] = 8;
		   arr[9] = 9;

		   //반복문 tip
		   //노가다 하다보면 겹치는 부분이 생기는데
		   //그 부분을 규칙을 찾아서 반복문으로 바꿀 수 있는지 찾아 본다
		   /*
		   for (int i = 0; i < 10; i++){
			   arr[i] = i;
		   }

		   for (int i = 0; i < 10; i++)
		   {
			   printf("arr[%d] = %d", i, arr[i]);
		   }*/

		   // 실습 
		   // 1.성적 10개 입력 받고 합계와 평균(실수)을 출력
		   // 입력받은 성적 다시 출력
		   // 2.성적 10개 입력받고 가장 낮은 성적과 가장 높은 성적을 출력해주고 입력받은 성적들을 다시 출력
		   // 3.10개 숫자 입력받고 홀수 짝수 갯수 출력 후 입력받은 숫자 다시 출력
		   /*
		   int arr[10] = { 0 };
		   int sum = 0;

		   for (int i = 0; i < 10; i++)
		   {
			   printf("성적을 입력해주세요: ");
			   scanf_s("%d ", &arr[i]);
			   sum += arr[i];
		   }

		   int average = sum / 10;

		   printf("성적의 합:%d ", sum);
		   printf("성적의 평균:%d ", average);

		   */
		   /*
		   int arr[10] = { 0 };
		   int max = 0;
		   int min = 99999;
		   for (int i = 0; i < 10; i++)
		   {
			   printf("성적을 입력해주세요: ");
			   scanf_s("%d ", &arr[i]);

		   }

		   int max = arr[0];

		   //==
		   for (int i = 0; i < 10; i++)
		   {
			   if (max < arr[i])
			   {
				   max = arr[i];
			   }
			   else
			   {

			   }
		   }
		   for (int i = 0; i < 10; i++)
		   {
			   if (min > arr[i])
			   {
				   min= arr[i];
			   }

		   }

		   printf("가장 높은 성적: %d", max);
		   printf("가장 낮은 성적: %d", min);
	   }
		   */
		   /*
			   int arr[10] = { 0 };
			   int odd_num = 0;
			   int even_num = 0;

			   for (int i = 0; i < 10; i++)
			   {
				   printf("숫자를 입력해주세요: ");
				   scanf_s("%d ", &arr[i]);

				   if (arr[i] % 2 == 0)
				   {
					   even_num++;
				   }
				   else
				   {
					   odd_num++;

				   }

			   }
			   printf("짝수 갯수: %d", even_num);
			   printf("홀수 갯수: %d", odd_num);
		   }*/
		   /*shuffle, swap*/

		   /*로또 번호 생성하기
		   1~45까지 담긴 배열
		   잘 섞은 다음 7개 출력
		   */


	/*srand((unsigned int)time(NULL));
	int arr[7] = { 0 };//rand() % 45;

	for (int i = 0; i < 45; i++)
	{
		arr[i] = i;
	}
	*/

	int lotto[45] = { 0, };

	for (int i = 0; i < 45; i++)
	{
		lotto[i] = i+1;

	}

	for (int i = 0; i < 10000; i++) 
	{
		int index1 = rand() % 45;
		int index2 = rand() % 45;

		int temp = lotto[index1];
		lotto[index1] = lotto[index2];
		lotto[index2] = temp;
	}

	for (int i = 0; i < 7; i++) 
	{
		printf("%d번째 번호: %d", i + 1, lotto[i]);
	}
}


