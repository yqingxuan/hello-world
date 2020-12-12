#include "game.h"
void Show(){
	int i = 10;
	char name[64];
	char passwd[64];
	int times = 5;
	while (times > 0){
		printf("请输入您的账户名\n");
		scanf("%s", name);
		printf("请输入您的密码\n");
		scanf("%s", passwd);
		if ((strcmp(name, NAME) == 0 && strcmp(passwd, PASSWD) == 0) || (strcmp(name, NAMES) == 0 && strcmp(passwd, PASSWDS) == 0)){
			printf("登陆成功！\n");
			break;
		}
		else {
			times--;
			printf("账户名或密码输入有误，你还有%d次输入机会，请重新输入!\n", times);
			if (times == 0){
				printf("输入次数已用完，请%d之后再试！", i);
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
	printf("请在0~100之间猜一个数字。\n");
	while (1){

		scanf("%d", &n);
		
		
		if (n == r){
			printf("恭喜你，猜对了\n");
			printf("尊敬的用户，要不要再搞一把？\n");
			Menu1();
				break;
			}
		
		else if (n < r){
			printf("猜小了,请重新输入！\n");
			
		}
		else if(n>r){
			printf("猜大了,请重新输入！\n");		
		}	
	}
}
