#include <iostream>

int main()
{
	//2. ��ø �ݺ��� (2�� for��, 3�� for��)

	// �ݺ��� �ȿ� �ݺ��� ���� 
	// for (int i=0; i<10; i++)
	 // {
	  //   printf("\n i:%d\n", i); 
	// }
	  //   for (int j=0; j<10; j++)
		//    {
	   //         printf("\n j:%d\n", j); 
		// } 


// ����  for������ �� �� �ִ� �������� �ǽ�

// ������


//
// for (int i = 0; i <= 9; i++) {
//	printf("%d x %d = %d\n", 1, i, 1 * i);

//}


// 2�� for���� ����� ������ 

	/*for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}

}
*/

//�ݺ����� ����ϴ� ���� => �ݺ��� ���̱� ���ؼ�

// ���� for�� 
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


// ���� for�� 

/*	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("(%d, %d)", i, j);
		}
		printf("\n");
	}
}
*/

// ������ �����

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

