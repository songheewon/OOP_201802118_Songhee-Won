#include "Tree.h"
#include <iostream>

int c1 = rand() % 4;
int c2 = rand() % 4;
int c3 = rand() % 4;

tree::tree(int c1, int c2, int c3) {
	block[1][0] = '��';
	block[1][1] = '��';
	block[1][2] = '��';
	// blue = 1, green = 2, red = 4, grey = 7�̹Ƿ� ���� ���� ����
	// ���� ���� ����
	switch (c1) {
	case 0:
		c1 = 1;
		break;
	case 1:
		c1 = 2;
		break;
	case 2:
		c1 = 4;
		break;
	case 3:
		c1 = 7;
		break;
	}
	switch (c2) {
	case 0:
		c2 = 1;
		break;
	case 1:
		c2 = 2;
		break;
	case 2:
		c2 = 4;
		break;
	case 3:
		c2 = 7;
		break;
	}
	switch (c3) {
	case 0:
		c3 = 1;
		break;
	case 1:
		c3 = 2;
		break;
	case 2:
		c3 = 4;
		break;
	case 3:
		c3 = 7;
		break;
	}
	color[1][0] = c1;
	color[1][1] = c2;
	color[1][2] = c3;
}

bool big_block::can_left() {
	if (block[0][1] == '��') {
		// Tree ����� ���η� ������ ����̰� block�� �� ������ Ƣ����� ������
		// �ƴ϶��
		return true;
	}
	else if (block[0][1] == '��') {
		// Tree ����� ���η� ������ ����̰� block�� �� ������ Ƣ����� ������
		//�ƴ϶��
		return true;
	}
	else {
		// �̿��� ���� ���
		return false;
	}
}

bool big_block::can_right() {
	if (block[0][1] == '��') {
		// Tree ����� ���η� ������ ����̰� block�� �� ������ Ƣ����� ������
		// �ƴ϶��
		return true;
	}
	else if (block[0][1] == '��') {
		// Tree ����� ���η� ������ ����̰� block�� �� ������ Ƣ����� ������
		//�ƴ϶��
		return true;
	}
	else {
		// �̿��� ���� ���
		return false;
	}
}

bool big_block::can_down() {
	// �ؿ� �ٸ� ��ϰ� ���� ���� �ʴ´ٸ�
	return true;
}