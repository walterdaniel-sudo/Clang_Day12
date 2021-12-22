#include <stdio.h>
#include <Windows.h>

// ---- 반복문 ----
// do ~ while()문의 원형:
//		초기식;
// 
//		do
//		{
//			종속 문장 및 변화식;
//		} while (조건식);
// 
// do ~ while()문은 while문과 전체적으로 비슷하지만 종속 문장을 최소 한 번은 실행시킨다는 특징을 갖고 있다.
// do ~ whilw()문에서 무한루프를 사용하고 싶을 때는 while문과 마찬가지로 조건식에 1을 작성해주면 된다.

// ---- 기타 함수 ----
// system("명령어"): 콘솔 환경에서 사용되는 명령어를 실행시켜주는 함수
// Sleep(멈춰줄 시간): 시간 단위는 1/1000초 이다.
// 콘솔창을 잠깐 재워주는 함수, 멈춰 준다고 볼 수 있다.
// system함수, Sleep함수를 사용하기 위해서는 windows.h 헤더파일을 선언 해줘야 한다.

int main()
{
	/*int i = 1;

	do
	{
		printf("Hello world!\n");
		i++;
	} while (i < 5);*/

	// 내 풀이
	/*int i;

	do
	{
		printf("입력: ");
		scanf("%d", i);

		if (1 % 2 != 0)
			printf("출력: %d", i);
		else
		{
			printf("출력: %d", i);
			printf("짝수가 입력되어 프로그램을 종료합니다");
			break;
		}
	} while (1);*/

	// 선생님 풀이
	/*int num;

	do
	{
		printf("입력: ");
		scanf("%d", &num);

		printf("출력: %d\n\n", num);
	} while (num % 2);*/

	/*printf("ABCD\n");

	Sleep(5000);

	system("cls");

	printf("EFGH\n");*/

	// 내 풀이
	/*int Jan = 10000, JanP, Dow;
	int Menu;

	while (1)
	{
		printf("카드 잔액: %d", Jan);
		printf("1. 카드 충전\n");
		printf("2. 카드 사용\n");
		printf("3. 종료\n");
		printf("메뉴 입력: ");
		scanf("%d", &Menu);

		if (Menu == 1)
		{
			printf("카드를 충전합니다.\n");
			printf("충전할 금액 입력: ");
			scanf("%d", &JanP);

			int Jan = Jan + JanP;
			printf("잔액: %d", Jan);
		}
		else if (Menu == 2)
		{
			printf("카드를 사용합니다.\n");
			printf("사용할 금액 입력: ");
			scanf("%d", &Dow);

			int Jan = Jan - Dow;
			printf("잔액: %d", Jan);
		}
		else if (Menu == 3)
		{
			printf("프로그램을 종료합니다.");
			break;
		}
	}*/

	// 선생님 풀이
	int select, balance = 10000, money;

	do
	{
		system("cls");
		printf("카드 잔액: %d\n", balance);
		printf("1. 카드 잔액 충전\n");
		printf("2. 카드 잔액 사용\n");
		printf("3. 종료\n");
		scanf("%d", &select);
		
		switch (select)
		{
		case 1:
			system("cls");
			printf("카드 잔액: %d\n", balance);
			printf("충건 금액 입력: ");
			scanf("%d", &money);

			printf("%d원 충전해서 %d원 사용 가능합니다.\n", money, balance += money);

			Sleep(3500);
			break;

		case 2:
			while (1)
			{
				system("cls");
				printf("카드 잔액: %d\n", balance);
				printf("사용 금액 입력: ");
				scanf("%d", &money);

				if (balance >= money)
				{
					printf("%d원 사용하고 %d원 남았습니다.\n", money, balance -= money);

					Sleep(3500);
					break;
				}
				printf("잔액이 부족합니다.\n");
				Sleep(3500);
			}
			break;
		case 3:
			printf("프로그램을 종료합니다.\n");
			break;
		default:
			printf("1 ~ 3 중 하나를 입력해주세요.\n");
			Sleep("1500");
			break;
		}
	} while (select != 3);

	return 0;
}