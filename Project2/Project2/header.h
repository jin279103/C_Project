#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

//학생들의 정보를 저장하기 위한 구조체
typedef struct student {
	char leader[10] = { 0, };
	char company_name[20] = { 0, };
	char name[10] = { 0, };
	char email[30] = { 0, };
	char university[50] = { 0, };
	char major[80] = { 0, };
} Student;

void eliminate(char* str, char ch);
void read(Student* list);
void search_leader(Student* list);
void search_company(Student* list);
void search_name(Student* list);
void search_university(Student* list);



