// ConsoleApplication8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "Field.h"

using namespace std;

int main()
{
	for (int i = 3; i < 10; i++)
	{
		cout << "-----------------------------------------------------------" << endl;
		cout << "---------------------" << "Field side: " << i << "-------------------------" << endl;
		cout << "-----------------------------------------------------------" << endl;
		Field field(i, 6);
		field.calculateBlocks();
	}
	

	

    return 0;
}

