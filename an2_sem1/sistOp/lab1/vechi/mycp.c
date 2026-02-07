#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int main(){

  char buf[255];
  int ret_code;

  do{
    ret_code = read(0, buf, 255);
    if (ret_code < 0){
      printf("greseala\n");
      return 1;
    }
    ret_code = write(1, buf, ret_code);
    if(ret_code < 0){
      printf("greseala\n");
      return 1;
    }
  }while(ret_code < 0);

  return 0;
}
