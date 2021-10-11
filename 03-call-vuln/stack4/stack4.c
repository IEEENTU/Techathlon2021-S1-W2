// This challenge was retrieved from exploit education - protostar
// gcc -m32 -z execstack -fPIE -pie -z norelro -z now -fno-stack-protector -no-pie stack4.c -o stack4

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void win()
{
  printf("code flow successfully changed\n");
}

void vuln()
{
  char buffer[64];

  gets(buffer);
}

int main(int argc, char **argv)
{
	vuln();
}


