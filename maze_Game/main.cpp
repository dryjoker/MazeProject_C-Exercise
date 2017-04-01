#include "view.h"
#include "data.h"
#include "control.h"
//extern global variable
//extern int Realdata[N][N];//extern可引用global variable 宣告

int main()
{
	//Step1.顯示初始化
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