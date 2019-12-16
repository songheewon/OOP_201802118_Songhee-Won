#ifndef BIGBLOCK
#define BIGBLOCK

class big_block {
protected:
	char block[3][3];
	int color[3][3];

public: // 오버라이딩을 위한 virtual 선언
	big_block();
	virtual void decideCoor(int x, int y);
	virtual void textcolor(int color_number);
	virtual bool can_left() = 0;
	virtual bool can_right() = 0;
	virtual bool can_down() = 0;
	virtual void left() = 0;
	virtual void right() = 0;
	virtual void down() = 0;
	virtual void down_all() = 0;
	virtual void rotate() = 0;
	virtual void print();
};

#endif