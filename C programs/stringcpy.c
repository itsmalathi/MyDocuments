#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_VALUE 50 
int main()
{
 	char *string1 = "This is my program";
 	char *string2;
 	int index;
 	//string2=malloc((strlen(string1)+1)*sizeof(char));
 	string2=malloc( MAX_VALUE*sizeof(char));
 	for(index= 0;index<strlen(string1);index++)
 	{
 		 
  		 string2[index]=string1[index];
 	}
	//printf("%d\n",index);
 	string2[index] ='\0';
 	printf("%s\n",string2);
        //printf("%d",strlen(string2));
  	return 0;
}
