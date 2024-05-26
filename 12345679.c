#include <stdio.h>
#include <Windows.h>

void Init();

int main(void)
{
	Init();
	
	int n;
	
	printf("Input Number (1~9) : ");
	scanf("%d", &n);
	printf("%d", n * 9 * 12345679);	// 9n x 12345679
	
	return 0;
}

void Init()
{
	// Setup console
	system("title 12345679");
	system("mode con cols=40 lines=20");
	
	// Hide console cursor
	CONSOLE_CURSOR_INFO consoleCursorInfo;
	
	consoleCursorInfo.bVisible = 0;
	consoleCursorInfo.dwSize = 1;
	
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &consoleCursorInfo);
}
