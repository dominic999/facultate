#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

  while (true){
    char buf[255];
    int ret_code = read(0, buf, 255);
    if(ret_code < 0){
      return 1;
    }
    printf("%s", buf);
  }
  return 0;
}
