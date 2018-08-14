#include<stdio.h>

int main(){

	int input;
	unsigned char start_num,end_num,sum;
	printf("Enter only the 4 digit number:\t");
	scanf("%d",&input);
	start_num=input/1000;
	printf("starting number:%d\n",start_num );
	end_num=input%10;
	printf("Ending number:%d\n",end_num);
	sum=start_num+end_num;
	printf("sum of first and last digits:%d\n",sum);
	return 0;

}