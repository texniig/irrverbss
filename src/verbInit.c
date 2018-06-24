#include "irverbs.h"

void verbInit(char **A, FILE *file)
{
	int i = 0;
    while(!feof(file))
    {
    	fscanf(file,"%s",A[i]);
    	i++;
    }
}
