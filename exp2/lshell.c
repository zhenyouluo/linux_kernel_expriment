#include"lshell.h"

int main()
{
	char prompt[128];
	get_prompt(prompt);
	printf("%s\n", prompt);
}
