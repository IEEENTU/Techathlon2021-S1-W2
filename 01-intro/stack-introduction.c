// gcc -m32 -z execstack -fPIE -pie -z norelro -z now -fno-stack-protector -no-pie stack-introduction.c -o stack-introduction

#include <stdio.h>

int main() {
	int i = 42;
	char str[] = "Hello World";
	printFunc(i, str);
}

int printFunc(int i, char *str){
	printf("The integer is: %d, The string is %s\n", i, str);
}



