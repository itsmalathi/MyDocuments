#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char *key;
	char *value;
 	char *filename;

	filename = malloc(50*sizeof(char));	
        key=malloc(50*sizeof(char));
	value = malloc(50*sizeof(char));

        printf("Enter the filename:\t");
	scanf("%s",filename);
	printf("Enter the key:\t");
	scanf("%s",key);
	printf("Enter the value:\t");
	scanf("%s",value);

	char str1[50]= "perl json.pl \"";
	char str2[50]="\" \"";
	char str3[50]="\" \"";
	char str4[50]="\"";

	strcat(str1,filename);
	strcat(str1,str2);
	strcat(str1,key);
	strcat(str1,str3);
	strcat(str1,value);
	char *end=strcat(str1,str4);

	printf("%s\n",end);
	system(end);

        free(filename);
	free(key);
	free(value);



	return 0;

}

