// This challenge was retrieved from exploit education - protostar
// gcc -m32 -z execstack -fPIE -pie -z norelro -z now -fno-stack-protector -no-pie stack0.c -o stack0


#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
  volatile int modified;
  char buffer[64];

  modified = 0;
  gets(buffer);

  if(modified != 0) {
      printf("you have changed the 'modified' variable\n");
  } else {
      printf("Try again?\n");
  }
}
