#include "irverbs.h"

void printMas(int n, char **A)
{
    int i = 0;
    while(i <= n)
    {
        if(A[i][0] != '\0')
            fputs(A[i], stdout);
        if(i != n)
            printf("\n");
        i++;
    }
}
