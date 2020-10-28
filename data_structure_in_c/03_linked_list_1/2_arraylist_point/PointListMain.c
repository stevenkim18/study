#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Point.h"

int main(void)
{
	List list;
	t_point compPos;
	t_point * ppos;

	ListInit(&list);

	ppos = (t_point*)malloc(sizeof(t_point));
	SetPointPos(ppos, 2, 1);
	LInsert(&list, ppos);

	ppos = (t_point*)malloc(sizeof(t_point));
	SetPointPos(ppos, 2, 2);
	LInsert(&list, ppos);

	ppos = (t_point*)malloc(sizeof(t_point));
	SetPointPos(ppos, 3, 1);
	LInsert(&list, ppos);

	ppos = (t_point*)malloc(sizeof(t_point));
	SetPointPos(ppos, 3, 2);
	LInsert(&list, ppos);

	printf("count: %d \n", LCount(&list));

	if(LFirst(&list, &ppos))
	{
		ShowPointPos(ppos);

		while(LNext(&list, &ppos))
			ShowPointPos(ppos);
	}
	printf("\n");

	compPos.xpos=2;
	compPos.ypos=0;

	if(LFirst(&list, &ppos))
	{
		if(PointComp(ppos, &compPos)==1)
		{
			ppos=LRemove(&list);
			free(ppos);
		}

		while(LNext(&list, &ppos))
		{
			if(PointComp(ppos, &compPos)==1)
			{
				ppos=LRemove(&list);
				free(ppos);
			}
		}
	}

	printf("count: %d \n", LCount(&list));

	if(LFirst(&list, &ppos))
	{
		ShowPointPos(ppos);

		while(LNext(&list, &ppos))
			ShowPointPos(ppos);
	}
	printf("\n");

	return 0;
}
