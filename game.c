#include "game.h"
void Show(){
	int i = 10;
	char name[64];
	char passwd[64];
	int times = 5;
	while (times > 0){
		printf("�����������˻���\n");
		scanf("%s", name);
		printf("��������������\n");
		scanf("%s", passwd);
		if ((strcmp(name, NAME) == 0 && strcmp(passwd, PASSWD) == 0) || (strcmp(name, NAMES) == 0 && strcmp(passwd, PASSWDS) == 0)){
			printf("��½�ɹ���\n");
			break;
		}
		else {
			times--;
			printf("�˻������������������㻹��%d��������ᣬ����������!\n", times);
			if (times == 0){
				printf("������������꣬��%d֮�����ԣ�", i);
				Sleep(i * 1000);
				times += 3;
				i += 5;
			}

		}

	}
}
void Menu(){
	printf("#############################\n");
	printf("## 1 . Play       2 . Exit ##\n");
	printf("#############################\n");
	printf("Select#\n");
}
void Menu1(){
	printf("#############################\n");
	printf("## 1 . Continue    2. Exit ##\n");
	printf("#############################\n");
	printf("Select#\n");
}
void Game(){
	int n;
	srand((unsigned int)time(NULL));
	int r = rand() % Rang;
	printf("����0~100֮���һ�����֡�\n");
	while (1){

		scanf("%d", &n);
		
		
		if (n == r){
			printf("��ϲ�㣬�¶���\n");
			printf("�𾴵��û���Ҫ��Ҫ�ٸ�һ�ѣ�\n");
			Menu1();
				break;
			}
		
		else if (n < r){
			printf("��С��,���������룡\n");
			
		}
		else if(n>r){
			printf("�´���,���������룡\n");		
		}	
	}
}
