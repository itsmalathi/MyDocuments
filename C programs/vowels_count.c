#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_LEN 50

void do_vowels_count_in_string(char *in_string){
	char index,count=0;
	for(index=0;index<strlen(in_string);index++){
		if(in_string[index]=='a'||in_string[index]=='e'||in_string[index]=='i'||in_string[index]=='o'||in_string[index]=='u'){
			count=count+1;
		}
	}
	printf("vowels count:%d",count);
}
int main(){
	char *input_string;
	input_string=malloc(MAX_LEN*sizeof(char));
	printf("Enter the string\t:" );
	scanf("%s",input_string);
	do_vowels_count_in_string(input_string);
	return 0;
	free(input_string);
}