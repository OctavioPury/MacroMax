// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#define MAX(a, b) a > b ? a : b 

using namespace std;

int f() {
	return 3;
}

int main()
{
	int x = 3;
	int m = MAX(x, f() + 1) * 2;
	//When expanded, parsed as m =(((x) > (f() + 1)) ? ((x) : (f()))) + (1 * 2)
	//To avoid this nasty effect we should use "(" and ")" around every
	//argument in the definition of the macro.
	cout << m << endl;
}

