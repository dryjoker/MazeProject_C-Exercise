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
			//i-1�����j�󵥩�0
			if (ipos - 1 >= 0)
			{
				//�ܼƼƭȥ洫 0��1 1��0
				int tmp = Realdata[ipos][jpos];
				Realdata[ipos][jpos] = Realdata[ipos - 1][jpos];
				Realdata[ipos - 1][jpos] = tmp;
				ipos -= 1;
			}
			break;
		case 's':
			if (ipos + 1 <= N - 1)//2d-array �̤j�U�Ь�9
			{
				//�ܼƼƭȥ洫 0��1 1��0
				int tmp = Realdata[ipos][jpos];
				Realdata[ipos][jpos] = Realdata[ipos + 1][jpos];
				Realdata[ipos + 1][jpos] = tmp;
				ipos += 1;
			}
			break;
		case 'a':
			//j-1�����j�󵥩�0
			if (jpos - 1 >= 0)
			{
				//�ܼƼƭȥ洫 0��1 1��0
				int tmp = Realdata[ipos][jpos];
				Realdata[ipos][jpos] = Realdata[ipos][jpos-1];
				Realdata[ipos][jpos-1] = tmp;
				jpos -= 1;
			}
			break;
		case 'd':
			//j+1�����p�󵥩�9
			if (jpos + 1 <= N-1)
			{
				//�ܼƼƭȥ洫 0��1 1��0
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