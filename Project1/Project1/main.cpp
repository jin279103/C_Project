#include "header.h"

int main()
{
	Student list[6];

	input(list);
	quick_sort(list, 0, 5);
	output(list);
	save(list);
}