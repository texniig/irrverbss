#include "irverbs.h"

int main()
{
	int choose;
	FILE *v_first_form = fopen("../v_first_form.txt", "r");
	FILE *v_second_form = fopen("../v_second_form.txt", "r");
	FILE *v_third_form = fopen("../v_third_form.txt", "r");
	char **first = (char **)malloc(120*sizeof(char *));
	char **second = (char **)malloc(120*sizeof(char *));
	char **third = (char **)malloc(120*sizeof(char *));
	for(int i = 0; i < 120; i++)
	{
		first[i] = (char *)malloc(15*sizeof(char));
		second[i] = (char *)malloc(15*sizeof(char));
		third[i] = (char *)malloc(15*sizeof(char));;
	}
	verbInit(first, v_first_form);
	verbInit(second, v_second_form);
	verbInit(third, v_third_form);
	fclose(v_first_form);
	fclose(v_second_form);
	fclose(v_third_form);
	printf("Choose a training mode:\n");
	printf("\t1-You get the first form and try to type the second form right\n");
	printf("\t2-You get the first form and try to type the third form right\n");
	printf("\t3-You get the second form and try to type the first form right\n");
	printf("\t4-You get the second form and try to type the third form right\n");
	printf("\t5-You get the third form and try to type the first form right\n");
	printf("\t6-You get the third form and try to type the second form right\n");
	s:
	scanf("%d", &choose);
	switch(choose)
	{
		case 1: game(first, second); break;
		case 2: game(first, third); break;
		case 3: game(second, first); break;
		case 4: game(second, third); break;
		case 5: game(third, first); break;
		case 6: game(third, second); break;
		default: printf("Type a number from 1 to 6:\n"); goto s;
	}
	return 0;
}
