#include <stdio.h>

main()
{
		FILE *in_file = fopen("testoutput.txt", "r");
		char line[80];
		fscanf(in_file, "%79[^\n]\n", line);
		puts(line);
		FILE *out_file = fopen("testoutput.txt", "w");
		fprintf(out_file, "So long, file.\n");
}
