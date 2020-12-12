#include "game.h"
int main(){
	Show();
	Menu();
	int quit = 0;
	while (!quit)
	{
		int select = 0;
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			Game();
			break;
		case 2:
			quit = 1;
			break;
		default:
			printf("输入错误\n");
			break;
		}
	}
	printf("游戏结束，欢迎下次来玩~\n");
	system("pause");
	return 0;
}