#include<stdio.h>

int main()
{
	int input[20];
	unsigned char i_index,j_index,temp;

	printf("Enter the numbers\n");

	for(i_index=0;i_index<5;i_index++){
		scanf("%d",&input[i_index]);
	}

	for(i_index=0;i_index<5;i_index++){

		for(j_index=i_index+1;j_index<5;j_index++){

			if(input[i_index]>input[j_index]){

				temp=input[i_index];
				input[i_index]=input[j_index];
				input[j_index]=temp;
			}
		}
	} 

	printf("Sorted elements:\n");

	for(i_index=0;i_index<5;i_index++){
		printf("%d\n",input[i_index]);
	}
	
	return 0;
}
