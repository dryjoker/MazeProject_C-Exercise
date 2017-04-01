#include "control.h"
/*
00 01 02
10 11 12
20 21 22

algorithm for maze movement(up/down/right/left)
		   (i-1,j)
(i,j-1)    (i,j)    (i,j+1)
	       (i+1,j
*/

void run(char ch)//w s a d
{
	switch (ch)
	{
		case 'w':
			//i-1ゲ斗单0
			if (ipos - 1 >= 0)
			{
				//跑计计ユ传 0传1 1传0
				int tmp = Realdata[ipos][jpos];
				Realdata[ipos][jpos] = Realdata[ipos - 1][jpos];
				Realdata[ipos - 1][jpos] = tmp;
				ipos -= 1;
			}
			break;
		case 's':
			if (ipos + 1 <= N - 1)//2d-array 程夹9
			{
				//跑计计ユ传 0传1 1传0
				int tmp = Realdata[ipos][jpos];
				Realdata[ipos][jpos] = Realdata[ipos + 1][jpos];
				Realdata[ipos + 1][jpos] = tmp;
				ipos += 1;
			}
			break;
		case 'a':
			//j-1ゲ斗单0
			if (jpos - 1 >= 0)
			{
				//跑计计ユ传 0传1 1传0
				int tmp = Realdata[ipos][jpos];
				Realdata[ipos][jpos] = Realdata[ipos][jpos-1];
				Realdata[ipos][jpos-1] = tmp;
				jpos -= 1;
			}
			break;
		case 'd':
			//j+1ゲ斗单9
			if (jpos + 1 <= N-1)
			{
				//跑计计ユ传 0传1 1传0
				int tmp = Realdata[ipos][jpos];
				Realdata[ipos][jpos] = Realdata[ipos][jpos + 1];
				Realdata[ipos][jpos + 1] = tmp;
				jpos += 1;
			}
			break;
		default:
			break;
	}
}