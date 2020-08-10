# include "header.h"

void output(Student* list)
{
	printf("   ID     |    Teamname    |     Company    |\n");
	printf("----------|----------------|----------------|\n");

	for (int i = 0; i < 6; i++)
	{
		printf("%10d|%16s|%16s|\n", list[i].id, list[i].teamname, list[i].company);
	}
}