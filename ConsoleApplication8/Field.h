#pragma once
class Field
{
private:
	int side = 0;
	int allSquares = 0;
	int maxBlocks = 0;

public:
	Field(int, int);
	~Field();


	void calculateBlocks();
};

