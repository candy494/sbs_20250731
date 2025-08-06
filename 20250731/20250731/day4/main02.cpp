#include <iostream>

int main()
{
	//2. 중첩 반복문 (2중 for문, 3중 for문)

	// 반복문 안에 반복문 존재 
	// for (int i=0; i<10; i++)
	 // {
	  //   printf("\n i:%d\n", i); 
	// }
	  //   for (int j=0; j<10; j++)
		//    {
	   //         printf("\n j:%d\n", j); 
		// } 


// 이중  for문으로 할 수 있는 보편적인 실습

// 구구단


//
// for (int i = 0; i <= 9; i++) {
//	printf("%d x %d = %d\n", 1, i, 1 * i);

//}


// 2중 for문을 사용한 구구단 

	/*for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}

}
*/

//반복문을 사용하는 이유 => 반복을 줄이기 위해서

// 삼중 for문 
	/*
	for (int i = 0; i <= 24; i++) //hour
	{
		for (int j = 1; j <= 60; j++) //min
		{
			for (int k = 0; k <= 60; k++) //sec
			{

				printf("%d : %d : %d ", i, j, k);

			}
		}
	}
}

*/


// 이중 for문 

/*	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("(%d, %d)", i, j);
		}
		printf("\n");
	}
}
*/

// 공포의 별찍기

	/*
	*
	**
	***
	****
	*****
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}*/

/*
*****
****
***
**
*
*/
/*
for (int i = 0; i < 5; i++)
{

	for (int j = 0; j < 5; j++)
	{
		if (j <= i)
		{
			printf(" ");
		}
		else {
			printf("*");
		}
	}
	printf("\n");
}

}
*/
/*
*****
 ****
  ***
   **
	*
	*/
/*
	for (int i = 0; i < 5; i++)
	{

		for (int j = 0; j < 5; j++)
		{
			if (j<=i)
			{
				printf(" ");
			}
			else {
				printf("*");
			}
		}
		printf("\n");
	}
}
*/
/*
    *
   **
  ***
 ****
*****
*/

for (int i = 0; i < 5; i++)
{
	for (int j = 0; j < 5; j++)
	{
		if (j*i<=4)
		{
			printf(" ");
		}
		else {
			printf("*");
		}
	}
	printf("\n");
}

