#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <pwd.h>

int main(){

  char dom[256];
  int ret_code = read(0, dom, 256);
  if (ret_code < 0){
    printf("eroare");
    return 1;
  }
  printf("ret code: %d", ret_code);
  dom[ret_code-1] = '\0';
  printf("input: %s\n", dom);
  struct passwd* user= getpwnam(dom);
  if(user){
    printf("nume: %s\n", user->pw_name);
    printf("uid: %d\n", user->pw_uid);
  }
  return 0;
}


