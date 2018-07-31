#include<stdio.h>

char do_vowel_test(char c_input){
	if(c_input=='a'){return 0;}//return 0 -> vowel
	else if(c_input=='e'){return 0;}
	else if(c_input=='i'){return 0;}
	else if(c_input=='o'){return 0;}
	else if(c_input=='u'){return 0;}
	else{return 1;}//return 1 ->consonent
	return -1;
}


int main()
{
	char char_input;
	char ret;
	printf("Enter the character\t:");
	scanf("%c",&char_input);
	ret=do_vowel_test(char_input);
	if(ret==0){
		printf("vowel\n");
	}
	else if(ret==1){
		printf("consonant\n");
	}
	else{
		printf("Error\n");
	}
	return 0;
}