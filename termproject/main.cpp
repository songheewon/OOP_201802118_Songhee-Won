#include<stdio.h>
#include<Windows.h>
#include<conio.h>

// 키보드 값 설정
#define UP 72 // rotate()를 위함
#define DOWN 80 // down()을 위함
#define LEFT 75 // left()를 위함
#define RIGHT 77 // right()를 위함
#define SPACEBAR 32 // down_all()을 위함
#define ESC 27 //pause를 위함

void decideCoor(int x, int y);
void textcolor(int color_number);
void makemap();
void startWindow();
void playGame();
void reset();

int block_x, block_y; // 이동 중인 블록의 좌표
int keyboard; // 키보드로 입력 받은 값 저장
int score; // 점수
int line; // 제거한 줄의 수
int next_block_info; // Tree? Cross? Fold?

int need_new_block = 0; // 새로운 블록이 필요한가?
int crush = 0; // 이동 중인 블록이 충돌 중인가?

void decideCoor(int x, int y) { // 출력 좌표 설정
	COORD Pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void textcolor(int color_number) { // 출력문 색상 설정
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);
}

void makeMap() { // 맵 만들기
	char map[5][12]; // 5 * 12 크기
	for (int j = 0; j < 12; j++) {
		textcolor(10);
		decideCoor(5, 5 + j);
		printf("□");
		for (int k = 0; k < 5; k++) {
			textcolor(0); // 안 보이게 설정 (빈 곳과 같은 의미)
			// textcolor의 인자가 0인 곳은 빈 곳으로 간주하고
			// block이 자유롭게 움직일 수 있도록 함
			printf("□");
			textcolor(10);
			// 다시 출력문들이 보이게 함
		}
		printf("□\n");
	}
	decideCoor(5, 17);
	printf("□□□□□□□"); // 바닥
	decideCoor(30, 4);
	textcolor(10);
	printf("< How to Play >"); // 게임 방법 출력
	decideCoor(30, 6);
	printf("Press Arrow Keys to Play!");
	decideCoor(30, 8);
	printf("→ : Go Right");
	decideCoor(30, 10);
	printf("← : Go Left");
	decideCoor(30, 12);
	printf("↓ : Go Down");
	decideCoor(30, 14);
	printf("↑ : Rotation");
	decideCoor(30, 16);
	printf("space bar : Go Down Straightly");
	decideCoor(30, 18);
	printf("ESC : Go Back to Main");
	textcolor(15);
}

void playGame() {
	// 블록을 생성하여 게임을 진행하는 메소드
	// newBlock()함수를 반복 호출하되, 게임 종료 시 GAME OVER 출력 후 호출 종료
}

void reset() {
	score = 0;
	keyboard = 0;
	line = 0;
	system("cls");
	makeMap();
}

void newBlock() {
	int i, j;
	block_x = 5 / 2 - 1; // 가운데에 생성
	block_y = 0;
	need_new_block = 0;
	next_block_info = rand() % 3;
}

void checkKeyboard() {
	keyboard = 0;
	if (_kbhit()) {
		keyboard = _getch();
		if (keyboard == 224) {
			do {
				keyboard = _getch();
			} while (keyboard == 224);
			switch (keyboard) {
			case LEFT:
				if (crush == 0) {
				
				}
			}
		}
	}
}

void foldBlock() {
	
}

void startWindow() {
	system("mode con cols=100 lines=40");
	decideCoor(37, 14);
	textcolor(15);
	puts("Press Any Key to Start");
	while (1) {
		if (_kbhit()) {
			system("cls");
			makeMap();
			break;
		}
			decideCoor(30, 10);
			textcolor(12);
			puts("☆★ BBUYO-BBUYO by Songhee Won ★☆");
			Sleep(500);
			if (_kbhit()) {
				system("cls");
				makeMap();
				break;
			}
			decideCoor(30, 10);
			textcolor(14);
			puts("☆★ BBUYO-BBUYO by Songhee Won ★☆");
			Sleep(500);
			if (_kbhit()) {
				system("cls");
				makeMap();
				break;
			}
			decideCoor(30, 10);
			textcolor(10);
			puts("☆★ BBUYO-BBUYO by Songhee Won ★☆");
			Sleep(500);
			if (_kbhit()) {
				system("cls");
				makeMap();
				break;
			}
			textcolor(11);
			decideCoor(30, 10);
			puts("☆★ BBUYO-BBUYO by Songhee Won ★☆");
			Sleep(500);
			if (_kbhit()) {
				system("cls");
				makeMap();
				break;
			}
			decideCoor(30, 10);
			textcolor(13);
			puts("☆★ BBUYO-BBUYO by Songhee Won ★☆");
			Sleep(500);
			if (_kbhit()) {
				system("cls");
				makeMap();
				break;
			}
	}
}

int main()
{
	startWindow();
	return 0;
}