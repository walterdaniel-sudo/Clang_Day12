#include <stdio.h>
#include <Windows.h>

// ---- �ݺ��� ----
// do ~ while()���� ����:
//		�ʱ��;
// 
//		do
//		{
//			���� ���� �� ��ȭ��;
//		} while (���ǽ�);
// 
// do ~ while()���� while���� ��ü������ ��������� ���� ������ �ּ� �� ���� �����Ų�ٴ� Ư¡�� ���� �ִ�.
// do ~ whilw()������ ���ѷ����� ����ϰ� ���� ���� while���� ���������� ���ǽĿ� 1�� �ۼ����ָ� �ȴ�.

// ---- ��Ÿ �Լ� ----
// system("��ɾ�"): �ܼ� ȯ�濡�� ���Ǵ� ��ɾ ��������ִ� �Լ�
// Sleep(������ �ð�): �ð� ������ 1/1000�� �̴�.
// �ܼ�â�� ��� ����ִ� �Լ�, ���� �شٰ� �� �� �ִ�.
// system�Լ�, Sleep�Լ��� ����ϱ� ���ؼ��� windows.h ��������� ���� ����� �Ѵ�.

int main()
{
	/*int i = 1;

	do
	{
		printf("Hello world!\n");
		i++;
	} while (i < 5);*/

	// �� Ǯ��
	/*int i;

	do
	{
		printf("�Է�: ");
		scanf("%d", i);

		if (1 % 2 != 0)
			printf("���: %d", i);
		else
		{
			printf("���: %d", i);
			printf("¦���� �ԷµǾ� ���α׷��� �����մϴ�");
			break;
		}
	} while (1);*/

	// ������ Ǯ��
	/*int num;

	do
	{
		printf("�Է�: ");
		scanf("%d", &num);

		printf("���: %d\n\n", num);
	} while (num % 2);*/

	/*printf("ABCD\n");

	Sleep(5000);

	system("cls");

	printf("EFGH\n");*/

	// �� Ǯ��
	/*int Jan = 10000, JanP, Dow;
	int Menu;

	while (1)
	{
		printf("ī�� �ܾ�: %d", Jan);
		printf("1. ī�� ����\n");
		printf("2. ī�� ���\n");
		printf("3. ����\n");
		printf("�޴� �Է�: ");
		scanf("%d", &Menu);

		if (Menu == 1)
		{
			printf("ī�带 �����մϴ�.\n");
			printf("������ �ݾ� �Է�: ");
			scanf("%d", &JanP);

			int Jan = Jan + JanP;
			printf("�ܾ�: %d", Jan);
		}
		else if (Menu == 2)
		{
			printf("ī�带 ����մϴ�.\n");
			printf("����� �ݾ� �Է�: ");
			scanf("%d", &Dow);

			int Jan = Jan - Dow;
			printf("�ܾ�: %d", Jan);
		}
		else if (Menu == 3)
		{
			printf("���α׷��� �����մϴ�.");
			break;
		}
	}*/

	// ������ Ǯ��
	int select, balance = 10000, money;

	do
	{
		system("cls");
		printf("ī�� �ܾ�: %d\n", balance);
		printf("1. ī�� �ܾ� ����\n");
		printf("2. ī�� �ܾ� ���\n");
		printf("3. ����\n");
		scanf("%d", &select);
		
		switch (select)
		{
		case 1:
			system("cls");
			printf("ī�� �ܾ�: %d\n", balance);
			printf("��� �ݾ� �Է�: ");
			scanf("%d", &money);

			printf("%d�� �����ؼ� %d�� ��� �����մϴ�.\n", money, balance += money);

			Sleep(3500);
			break;

		case 2:
			while (1)
			{
				system("cls");
				printf("ī�� �ܾ�: %d\n", balance);
				printf("��� �ݾ� �Է�: ");
				scanf("%d", &money);

				if (balance >= money)
				{
					printf("%d�� ����ϰ� %d�� ���ҽ��ϴ�.\n", money, balance -= money);

					Sleep(3500);
					break;
				}
				printf("�ܾ��� �����մϴ�.\n");
				Sleep(3500);
			}
			break;
		case 3:
			printf("���α׷��� �����մϴ�.\n");
			break;
		default:
			printf("1 ~ 3 �� �ϳ��� �Է����ּ���.\n");
			Sleep("1500");
			break;
		}
	} while (select != 3);

	return 0;
}