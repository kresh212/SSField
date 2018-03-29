#include "stdafx.h"
#include "Field.h"

using namespace std;

typedef vector<int> vectorInt;

int combinationCount = 0;
void setPositionForNextBlock(int position, int nextBlocks, int allSquares, vectorInt blocks);

Field::Field(int s, int m)
{
	side = s;
	allSquares = s * s;
	maxBlocks = m > 0? m : allSquares;
}


Field::~Field()
{
}

void Field::calculateBlocks()
{
	for (int i = 0; i < maxBlocks; i++)
	{
		combinationCount = 0;
		vectorInt blocks;
		setPositionForNextBlock(0, i, allSquares, blocks);
		cout << "Combination: " << combinationCount << " for side: " << side << " and blocks count: " << i + 1 << endl;
	}
}

void setPositionForNextBlock(int position, int nextBlocks, int allSquares, vectorInt blocks)
{
	for (int i = position; i < allSquares - nextBlocks; i++)
	{
		vectorInt newBlocks = blocks;
		newBlocks.push_back(i);
		if (nextBlocks > 0)
		{
			setPositionForNextBlock(i + 1, nextBlocks - 1, allSquares, newBlocks);
		}
		else
		{
			/*
			for (int i = 0; i < newBlocks.size(); i++)
			{
				cout << newBlocks[i] << ", ";
			}
			cout << endl;
			*/
			combinationCount++;
		}
	}
}