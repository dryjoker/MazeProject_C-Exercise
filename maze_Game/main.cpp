#include "view.h"
#include "data.h"
#include "control.h"
//extern global variable
//extern int Realdata[N][N];//extern�i�ޥ�global variable �ŧi

int main()
{
	//Step1.��ܪ�l��
	show(Realdata);
	while (1)
	{
		char ch = getchar();
		getchar();
		run(ch);
		show(Realdata);
	}
	system("PAUSE");
	return 0;
}