#include "big_block.h"
#include<Windows.h>

big_block::big_block() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			block[i][j] = '��'; //�� ����� �ǹ�
			color[i][j] = 0; // ��� �� �� ����(black)
		}
	}
}

void big_block::decideCoor(int x, int y) { // ��� ��ǥ ����
	COORD Pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void big_block::textcolor(int color_number) { // ��¹� ���� ����
	//���Ŀ� 2���� �迭�� color�� ���� �Ķ���ͷ� ����� ����
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);
}

bool big_block::can_left() {
	return true;
}

bool big_block::can_right() {
	return true;
}

bool big_block::can_down() {
	return true;
}

void big_block::left() {}
void big_block::right() {}
void big_block::down() {}
void big_block::down_all() {}
void big_block::rotate() {}

void big_block::print() {}