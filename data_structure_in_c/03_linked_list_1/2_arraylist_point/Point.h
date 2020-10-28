#ifndef POINT_H
# define POINT_H

typedef struct	s_point
{
	int			xpos;
	int			ypos;
} 				t_point;

void SetPointPos(t_point * ppos, int xpos, int ypos);

void ShowPointPos(t_point * ppos);

int PointComp(t_point * pos1, t_point * pos2);

#endif
