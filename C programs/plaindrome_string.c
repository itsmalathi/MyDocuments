#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define TRUE 0
#define FALSE 1
char do_plaindrome_check(char *string){
 
  char start_index,end_index;
  char count,len;
  /*unsigned char index,count,len;
  index=1;
  count=0;*/
  len=strlen(string);
  /*printf("length:%d",len);
  while(index<=len){
   
    if((string+index-)!=(string[3-index])){
      return FALSE;
      
    }
    else{
      count++;
    }
    index++;
  }*/
  for(start_index=0, end_index=len-1;start_index<len,end_index>=0;start_index++,end_index--){

    if(string[start_index]==string[end_index]){
      count=count+1;
    }

  }
  //printf("count:%d",count);
  if(count==len){
    return TRUE;
  }
  else{
    return FALSE;
  }
  return -1;
}

int main(){
  char *string;
  char return_val;
  string=malloc(50*sizeof(char));
  printf("Enter the string\t");
  scanf("%s",string);
 
  return_val=do_plaindrome_check(string);

  if(return_val==0){
  	printf("plaindrome\n");
  }
  else if(return_val==1)
  {
  	printf("Not plaindrome\n");
  }
  else{
  	printf("error\n");
  }
  free(string);

return 0;
}  