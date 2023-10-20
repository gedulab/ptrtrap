/*
 * sample code to demo the pitfall of implicit function call
 * by Raymond for the gdb camp in 2023 October.
 */
#include <stdio.h>

int main(int argc, char* argv[])
{
	char* name = get_name(argv[0]);
	printf("Demo of pointer trap by Raymond.\n");
	printf("Name: %s\n", name);
	
	return 0;
}

