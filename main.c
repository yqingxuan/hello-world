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
			printf("�������\n");
			break;
		}
	}
	printf("��Ϸ��������ӭ�´�����~\n");
	system("pause");
	return 0;
}