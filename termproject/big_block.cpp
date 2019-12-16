#include "big_block.h"
#include<Windows.h>

big_block::big_block() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			block[i][j] = '□'; //빈 블록을 의미
			color[i][j] = 0; // 출력 시 안 보임(black)
		}
	}
}

void big_block::decideCoor(int x, int y) { // 출력 좌표 설정
	COORD Pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void big_block::textcolor(int color_number) { // 출력문 색상 설정
	//이후에 2차원 배열인 color의 값을 파라미터로 사용할 것임
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