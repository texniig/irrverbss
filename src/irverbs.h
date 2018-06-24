#ifndef IRVERBS_H
#define IRVERBS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

void printMas(int n, char **A);
void verbInit(char **A, FILE *file);
void game(char **A, char **B);
bool isLetter(char a);

#endif
