/*
 * This is my first program in C
 * Author B O B G
 */

#include <stdio.h>

int main(void)
{
	int name[];
	while(scanf("%29s", &name) == 1)
	{
		if ( name == 28 )
			puts("%s this week  will turn %i years old.\n", "Abdul", name);
		else
			puts("Ask his twin sister she their DOB.\n");
	}
}
