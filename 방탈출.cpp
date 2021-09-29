#include <stdio.h>
#include <windows.h>


int main(void)
{
	int num;
	int key=1;
	int key1=1;
	int key2=1; 
	
	printf("방탈출게임 \n");
	printf("[1]시작 [2]끝\n");
	
	scanf("%d",&num);
	switch(num)
	{
		case 1:
			printf("당신은원룸에 갇쳤다.\n");
			printf("탈출하고싶으면 각 방에있는 힌트를 찾아서 탈출해라.");
			Sleep(2000);
			system("cls");
			break;
			
		case 2:
			printf("끝\n");
			Sleep(2000);
			exit(0); 
			break;
	}
	
	while(key)
	{
		printf("거실\n");
		printf("[1]티비[2]리모컨[3]전등[4]냉장고[5]싱크대\n");
		scanf("%d",&num);
		switch(num)
		{
			case 1:
				printf("아무것도 없다.\n");
				Sleep(2000);
				system("cls");
				break;
			case 2:
				printf("아무것도 없다.\n");
				Sleep(2000);
				system("cls");
				break;
			case 3:
				printf("옷장 열쇠를 발견했다.\n");
				Sleep(2000);
				system("cls");
				key=0;
				break;
			case 4:
				printf("아무것도 없다.\n");
				Sleep(2000);
				system("cls");
				break;
			case 5:
				printf("아무것도 없다.\n");
				Sleep(2000);
				system("cls");
				break;

				
		}
	}
	while(key1)
	{
		printf("방\n");
		printf("보유 아이템:옷장 열쇠\n");
		printf("[1]침대 [2]이불 [3]옷장\n");
		scanf("%d", &num);
		switch(num)
		{
			case 1:
				printf("아무것도 없다.\n");
				Sleep(2000);
				system("cls");
				break;
			case 2:
				printf("아무것도 없다.\n");
				Sleep(2000);
				system("cls");
				break;
			case 3:
				printf("옷장을 열쇠로 열었다.\n");
				Sleep(2000);
				printf("이상한 무언가를 발견했다.\n");
				Sleep(2000);
				system("cls");
				key1=0;
				break;


				
		}
	}
		while(key2)
	{
		printf("화장실 \n");
		printf("보유 아이템:이상한 무언가 \n");
		printf("[1]변기  [2]세면대  [3]창문\n");
		scanf("%d", &num);
		switch(num)
		{
			case 1:
				printf("아무것도 없다.\n");
				Sleep(2000);
				system("cls");
				break;
			case 2:
				printf("변기 안에서 망치를 발견했다.\n");
				Sleep(2000);
				printf("이상한 무언가를 망치로 첬다.\n");
				Sleep(2000);
				printf("열쇠를 발견했다.\n");
				Sleep(2000);
				system("cls");
				key2=0;
				break;
			case 3:
				printf("창문에 철창이 있다.\n");
				Sleep(2000);
				system("cls");
				break;


				
		}
	}
	printf("탈출");
	
}
