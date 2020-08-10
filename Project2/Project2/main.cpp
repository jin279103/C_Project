#include "header.h"

int main()
{
	Student list[30];

	read(list);

	while (true)
	{
		int select;
		printf("원하는 검색 항목을 선택하세요(1: 조장검색, 2: 배정기업검색, 3: 이름검색, 4: 학교검색, 0: 종료): ");
		scanf("%d", &select);
		if (select == 0) break;

		switch (select)
		{
		case 1:
			search_leader(list);
			break;
		case 2:
			search_company(list);
			break;
		case 3:
			search_name(list);
			break;
		case 4:
			search_university(list);
			break;
		default:
			printf("잘못 입력하였습니다. 다시 입력해주세요 \n");
		}
	}

	return 0;
}