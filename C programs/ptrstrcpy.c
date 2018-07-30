#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct {
	char source[20];
	char *dest;
}struct_data;

int display(struct_data *data)
{ 
  int index;
  data->dest=malloc(strlen(data->source)+1);
  for(index= 0;index<strlen(data->source);index++)
 	{
 		 
  		 (data+index)->dest= (data+index)->source;
 	}
 	(data+index)->dest='\0';
 	return 0;

}

int main()
{ 
  struct_data *data;
  data= malloc(sizeof(struct_data));
 
  printf("Enter the source string\t:");
  scanf("%s",data->source);
  display(data);
  printf("dest:%s\n",data->dest);
  //free(data->dest);
  free(data);
  return 0;
}
