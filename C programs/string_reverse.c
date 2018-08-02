#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_LEN 50
char do_string_reverse(char *in_string){
	char index1,index2;
	index2=0;
	char *reverse_string;
	reverse_string=malloc(MAX_LEN*sizeof(char));
	for(index1=strlen(in_string)-1;index1>=0;index1--){
		reverse_string[index2]=in_string[index1];
		index2++;
	}
	printf("Reversed string\t:%s\n",reverse_string);
	free(reverse_string);
	return 0;
}


int main(){
	char *input_string;
	input_string=malloc(MAX_LEN*sizeof(char));
	printf("Enter the string\t:");
	scanf("%s",input_string);
	do_string_reverse(input_string);
	free(input_string);
	return 0;
}