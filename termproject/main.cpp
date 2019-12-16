#include<stdio.h>
#include<Windows.h>
#include<conio.h>

// Ű���� �� ����
#define UP 72 // rotate()�� ����
#define DOWN 80 // down()�� ����
#define LEFT 75 // left()�� ����
#define RIGHT 77 // right()�� ����
#define SPACEBAR 32 // down_all()�� ����
#define ESC 27 //pause�� ����

void decideCoor(int x, int y);
void textcolor(int color_number);
void makemap();
void startWindow();
void playGame();
void reset();

int block_x, block_y; // �̵� ���� ����� ��ǥ
int keyboard; // Ű����� �Է� ���� �� ����
int score; // ����
int line; // ������ ���� ��
int next_block_info; // Tree? Cross? Fold?

int need_new_block = 0; // ���ο� ����� �ʿ��Ѱ�?
int crush = 0; // �̵� ���� ����� �浹 ���ΰ�?

void decideCoor(int x, int y) { // ��� ��ǥ ����
	COORD Pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void textcolor(int color_number) { // ��¹� ���� ����
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);
}

void makeMap() { // �� �����
	char map[5][12]; // 5 * 12 ũ��
	for (int j = 0; j < 12; j++) {
		textcolor(10);
		decideCoor(5, 5 + j);
		printf("��");
		for (int k = 0; k < 5; k++) {
			textcolor(0); // �� ���̰� ���� (�� ���� ���� �ǹ�)
			// textcolor�� ���ڰ� 0�� ���� �� ������ �����ϰ�
			// block�� �����Ӱ� ������ �� �ֵ��� ��
			printf("��");
			textcolor(10);
			// �ٽ� ��¹����� ���̰� ��
		}
		printf("��\n");
	}
	decideCoor(5, 17);
	printf("��������"); // �ٴ�
	decideCoor(30, 4);
	textcolor(10);
	printf("< How to Play >"); // ���� ��� ���
	decideCoor(30, 6);
	printf("Press Arrow Keys to Play!");
	decideCoor(30, 8);
	printf("�� : Go Right");
	decideCoor(30, 10);
	printf("�� : Go Left");
	decideCoor(30, 12);
	printf("�� : Go Down");
	decideCoor(30, 14);
	printf("�� : Rotation");
	decideCoor(30, 16);
	printf("space bar : Go Down Straightly");
	decideCoor(30, 18);
	printf("ESC : Go Back to Main");
	textcolor(15);
}

void playGame() {
	// ����� �����Ͽ� ������ �����ϴ� �޼ҵ�
	// newBlock()�Լ��� �ݺ� ȣ���ϵ�, ���� ���� �� GAME OVER ��� �� ȣ�� ����
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
	block_x = 5 / 2 - 1; // ����� ����
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
			puts("�١� BBUYO-BBUYO by Songhee Won �ڡ�");
			Sleep(500);
			if (_kbhit()) {
				system("cls");
				makeMap();
				break;
			}
			decideCoor(30, 10);
			textcolor(14);
			puts("�١� BBUYO-BBUYO by Songhee Won �ڡ�");
			Sleep(500);
			if (_kbhit()) {
				system("cls");
				makeMap();
				break;
			}
			decideCoor(30, 10);
			textcolor(10);
			puts("�١� BBUYO-BBUYO by Songhee Won �ڡ�");
			Sleep(500);
			if (_kbhit()) {
				system("cls");
				makeMap();
				break;
			}
			textcolor(11);
			decideCoor(30, 10);
			puts("�١� BBUYO-BBUYO by Songhee Won �ڡ�");
			Sleep(500);
			if (_kbhit()) {
				system("cls");
				makeMap();
				break;
			}
			decideCoor(30, 10);
			textcolor(13);
			puts("�١� BBUYO-BBUYO by Songhee Won �ڡ�");
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