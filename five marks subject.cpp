#include <stdio.h>
int main ()
{
	int english,maths,science,AI,electrical;
	int total,average,percentage;
	printf("ENTER THE MARKS : \n");
	scanf("%d%d%d%d%d",&english,&maths,&science,&AI,&electrical);
	total=english+maths+science+AI+electrical;
	average=total/5;
	percentage=(total*100)/500;
	printf("total =%d \n",total);
	printf("average =%d \n",average);
	printf("percentage =%d \n",percentage);
	return 0;
}
