/*MAXIMUM BETWEEN TWO NUMBERS IF -ELSE*/
#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("ENTER A three NUMBERS : \n");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2)
	{
		printf("GREATEST NUMBER=%d",num1);
	}
	else if(num2>num3)
	{
		printf("GREATEST NUMBER=%d",num2);
	}
	else
	{
		printf("GREATEST NUMBER=%d",num3);
	}
	return 0;

}

