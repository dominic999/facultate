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
  

  if(argc < 2){
    return 0;
  }

  struct stat buf; 

  int fd = open(argv[1], O_RDWR);
  char header[256];
  if(fd == -1){
    char* not_found = "HTTP/1.1 404 NOT FOUND\nContent-Type: text/html\n\n";
    strcpy(header, not_found);
    return -1;
  }

  char* found = "HTTP/1.1 200 OK\nContent-Type: text/html\n";
  strcpy(header, found);
  stat(argv[1], &buf);
  char size[64];
  sprintf(size,  "Content-Length: %d\n\n", buf.st_size);
  strcpy(header+strlen(found), size);

  void* file_content = mmap(0, buf.st_size, PROT_READ, MAP_PRIVATE, fd, 0);
  struct iovec iov[2];
  iov[0].iov_base = header;
  iov[0].iov_len = strlen(header);
  iov[1].iov_base = file_content;
  iov[1].iov_len = strlen(file_content);
  writev(1, iov, 2);

  
  munmap(file_content, buf.st_size);
  close(fd);
  return 0;
}
