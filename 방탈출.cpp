#include <stdio.h>
#include <windows.h>


int main(void)
{
	int num;
	int key=1;
	int key1=1;
	int key2=1; 
	
	printf("��Ż����� \n");
	printf("[1]���� [2]��\n");
	
	scanf("%d",&num);
	switch(num)
	{
		case 1:
			printf("��������뿡 ���ƴ�.\n");
			printf("Ż���ϰ������ �� �濡�ִ� ��Ʈ�� ã�Ƽ� Ż���ض�.");
			Sleep(2000);
			system("cls");
			break;
			
		case 2:
			printf("��\n");
			Sleep(2000);
			exit(0); 
			break;
	}
	
	while(key)
	{
		printf("�Ž�\n");
		printf("[1]Ƽ��[2]������[3]����[4]�����[5]��ũ��\n");
		scanf("%d",&num);
		switch(num)
		{
			case 1:
				printf("�ƹ��͵� ����.\n");
				Sleep(2000);
				system("cls");
				break;
			case 2:
				printf("�ƹ��͵� ����.\n");
				Sleep(2000);
				system("cls");
				break;
			case 3:
				printf("���� ���踦 �߰��ߴ�.\n");
				Sleep(2000);
				system("cls");
				key=0;
				break;
			case 4:
				printf("�ƹ��͵� ����.\n");
				Sleep(2000);
				system("cls");
				break;
			case 5:
				printf("�ƹ��͵� ����.\n");
				Sleep(2000);
				system("cls");
				break;

				
		}
	}
	while(key1)
	{
		printf("��\n");
		printf("���� ������:���� ����\n");
		printf("[1]ħ�� [2]�̺� [3]����\n");
		scanf("%d", &num);
		switch(num)
		{
			case 1:
				printf("�ƹ��͵� ����.\n");
				Sleep(2000);
				system("cls");
				break;
			case 2:
				printf("�ƹ��͵� ����.\n");
				Sleep(2000);
				system("cls");
				break;
			case 3:
				printf("������ ����� ������.\n");
				Sleep(2000);
				printf("�̻��� ���𰡸� �߰��ߴ�.\n");
				Sleep(2000);
				system("cls");
				key1=0;
				break;


				
		}
	}
		while(key2)
	{
		printf("ȭ��� \n");
		printf("���� ������:�̻��� ���� \n");
		printf("[1]����  [2]�����  [3]â��\n");
		scanf("%d", &num);
		switch(num)
		{
			case 1:
				printf("�ƹ��͵� ����.\n");
				Sleep(2000);
				system("cls");
				break;
			case 2:
				printf("���� �ȿ��� ��ġ�� �߰��ߴ�.\n");
				Sleep(2000);
				printf("�̻��� ���𰡸� ��ġ�� ú��.\n");
				Sleep(2000);
				printf("���踦 �߰��ߴ�.\n");
				Sleep(2000);
				system("cls");
				key2=0;
				break;
			case 3:
				printf("â���� öâ�� �ִ�.\n");
				Sleep(2000);
				system("cls");
				break;


				
		}
	}
	printf("Ż��");
	
}
