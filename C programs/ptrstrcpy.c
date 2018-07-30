#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//string copy using pointers in a dynamic way

//Global structure declaration
typedef struct {
	char source[20];
	char *dest;
}struct_data;

//To copy the source string to destination pointer
int display(struct_data *data)
{ 
  int index;
  data->dest=malloc(strlen(data->source)+1);
  for(index= 0;index<strlen(data->source);index++)
 	{
 		 
  		 (data+index)->dest= (data+index)->source;
 	}
 	(data+index)->dest='\0';//string must consist end of the character as NULL
 	return 0;

}

int main()
{ 
  struct_data *data;
  data= malloc(sizeof(struct_data));//Dynamic memory allocation of pointer in heap
 
  printf("Enter the source string\t:");
  scanf("%s",data->source);
  display(data);
  printf("dest:%s\n",data->dest);
  //free(data->dest);
  free(data);
  return 0;
}
