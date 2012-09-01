#include <stdio.h>
#include <stdlib.h>

void print_reverse(char *s) 
{
		size_t len = strlen(s);

		char *t = s + len - 1; 

		while ( t >= s ) {
				printf("%c", *t);

				t = t - 1;
		}
		puts ("");
}

int main()
{
		char s[80];
		fgets(s, 80, stdin);
		print_reverse(s);
}

