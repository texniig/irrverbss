#include "irverbs.h"

void game(char **A, char **B)
{
	int i;
	int my_score = 0;
	int pos_score = 0;
	char answer[15];
	while(true)
	{
		i = rand() % 117;
		printf("%s\n", A[i]);
		scanf("%s", (char*)&answer);
		pos_score++;
		if(strcmp((char*)answer, "q") == 0) break;
		if(strcmp((char*)answer, B[i]) == 0)
		{
			printf("Correct!\n");
			my_score++;
		}
		else
			printf("Incorrect!\n");
	}
	printf("You guessed %d out of %d right\n", my_score, pos_score);
}
