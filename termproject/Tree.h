#pragma once

#ifndef TREE
#define TREE

#include "big_block.h"

class tree : public big_block {
protected:
	int c1;
	int c2;
	int c3;
public:
	tree(int c1, int c2, int c3);
};

#endif