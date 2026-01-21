#include <sys/uio.h>
#include <sys/mman.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

int main(int argc, char* argv[]){

  if(argc < 3){
    return -1;
  }

  struct stat buf_1;
  struct stat buf_2;

  int fd_1 = open(argv[1], O_RDWR);
  int fd_2 = open(argv[2], O_CREAT | O_RDWR, 0644);

  stat(argv[1], &buf_1);
  lseek(fd_2, buf_1.st_size-1, SEEK_SET);
  write(fd_2, "", 1);
  printf("merge\n");
  stat(argv[2], &buf_2);
  void* file_1 = mmap(0, buf_1.st_size, PROT_READ, MAP_SHARED, fd_1, 0);
  void* file_2 = mmap(0, buf_2.st_size, PROT_READ, MAP_SHARED, fd_2, 0);

  memcpy(file_2, file_1, buf_1.st_size);

  close(fd_1);
  close(fd_2);
  return 0;
}
