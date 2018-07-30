#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	struct  student {
		int id;
        char name[20];
		int mark;
	};
    struct student *data;
	int index;
	data=malloc(sizeof(struct student)*5);
    
    for(index=0;index<2;index++){
    	
    	printf("Enter the id\t");
    	scanf("%d",&data[index].id);
    	printf("Enter the name\t");
    	scanf("%s",data[index].name);
    	printf("Enter the mark\t");
    	scanf("%d",&data[index].mark);
    }


    for(index=0;index<2;index++){
    	printf("id:%d\n",data[index].id);
        printf("name:%s\n",data[index].name);
    	printf("mark:%d\n",data[index].mark);
    }
    free(data);
    return 0;

}	
	

