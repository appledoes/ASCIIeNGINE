// NOTE: THIS FILE IS NOT REQUIRED AND IS JUST A TEST FILE FOR DEVELOPMENT
// IF YOU ARE IMPLEMENTING ASCIIeNGINE YOU SHOULD DELETE THIS

#include <stdio.h>
#include <stdlib.h>

#include "vector.h"

int main(void)
{
	int a;

	VECTOR_INIT(v);

	VECTOR_ADD(v, "Hallo");
	VECTOR_ADD(v, "Wie gehts dir?");
	VECTOR_ADD(v, "Ciao");

	printf("%d\n", VECTOR_GET(v, int, 1));

	VECTOR_DEL(v, 2);
	VECTOR_DEL(v, 1);
	VECTOR_DEL(v, 0);

	VECTOR_FREE(v);
}
