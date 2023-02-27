#define _CRT_SECURE_NO_WARNINGS 1
 
#include<stdio.h>
int main()
{
/*
	int i;
	int sum=1;
	for (i = 1; i <= 5; i++)
	{
		sum *= i;
	}
	printf("%d\n", sum);
	return 0;
*/
/*	int i;
	for (i = 2000; i <= 2500; i++)
	{
		if ((i % 4 == 0)&&(i%100!=0)||(i % 400 == 0))
		{
			printf("是闰年 %d", i);
		}
		else
		{
			printf("不是闰年 %d", i);
			 
		}
		
	}
	return 0;
*/

	int i = 1, t = 2;
	while (t <= 5) {
		i *= t;
		t++;
		printf("%d\n", i);
	}
	printf("%d\n", i);
	return 0;
}