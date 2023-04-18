#include "main.h"

int main(int arc, char **argv)
{
	char *user_imput = "(my_sh) c:\\>>$ ";  /* prompt */
	char *lineptr; /* to sotre buffer direction, contains what is written.  [getline function] */
	size_t n = 0; /* size_t store the assigned size in bytes;  [getline function] */
	/* declaring void variables */
	(void)arc;
	(void)argv;

	printf("%s", user_imput);
	getline(&lineptr, &n, stdin); /* [getline function]  stdin = stream; */
/* represents the source from which we want the function to get the data from. */
	printf("%s\n", lineptr); /* printing what was written or saved in *lineptr.  */

	free(lineptr); /* [getline] allocates memory, must be freed */
	return (0);
}
