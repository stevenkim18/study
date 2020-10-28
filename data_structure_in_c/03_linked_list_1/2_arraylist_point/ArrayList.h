#ifndef ARRAYLIST_H
# define ARRAYLIST_H

# include "Point.h"

# define TRUE	1
# define FALSE	0

# define LIST_LEN	100

// typedef int LData;
typedef t_point *LData;

typedef struct 	s_arrayList
{
	LData		arr[LIST_LEN];
	int 		numOfData;
	int 		curPosition;
} 				t_arrayList;


typedef t_arrayList List;

void 				ListInit(List * plist);
void 				LInsert(List * plist, LData data);

int 				LFirst(List * plist, LData * pdata);
int 				LNext(List * plist, LData * pdata);

LData 				LRemove(List * plist);
int 				LCount(List * plist);

#endif
