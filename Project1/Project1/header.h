#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

typedef struct student {
	char teamname[20];
	char company[20];
	int id;
} Student;

void input(Student* list);
void switching_pos(Student* list, int a, int b);
void quick_sort(Student* list, int start, int end);
void output(Student* list);
void save(Student* list);