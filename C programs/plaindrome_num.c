#include<stdio.h>
int main(){
int number,temp,remainder,reverse_num=0;
printf("Enter the number:\t");
scanf("%d",&number);
temp=number;

while(number>0){
	remainder=number%10;
	reverse_num=(reverse_num*10)+remainder;
	number=number/10;
	
}
if(temp==reverse_num){
	printf("Reversed number is %d plaindrome\n",reverse_num);
}
else{
	printf("Given number is %d not a plaindrome\n",reverse_num);
}
return 0;
}  