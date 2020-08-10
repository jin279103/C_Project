#include "header.h"

void switching_pos(Student* list, int a, int b)
{
	Student temp;

	temp = list[a];
	list[a] = list[b];
	list[b] = temp;

}


void quick_sort(Student* list, int start, int end)
{
	int pivot = list[start].id;
	int left = start + 1;
	int right = end;

	while (left <= right)
	{
		while (list[left].id < pivot)
		{
			left++;
		}
		while (list[right].id > pivot)
		{
			right--;
		}

		if (left <= right)
		{
			switching_pos(list, left, right);
		}
	}

	if (start < end)
	{
		switching_pos(list, start, right);
		quick_sort(list, start, right - 1);
		quick_sort(list, right + 1, end);
	}

	return;
}

