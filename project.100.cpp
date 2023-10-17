#include<stdio.h>
#include<graphics.h>
#define  AA  900
#define  BB  600
IMAGE  imgBg;
void gameInit() {
	loadimage(&imgBg, "");

	initgraph(AA, BB );
}
void updateWindows()
{
	putimage(0, 0, &imgBg);
}

int main()
{
	updateWindows();
	system("pause");
	return 0;
}