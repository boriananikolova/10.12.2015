// pointer1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void changeInt(int *_n1, int *_n2)
{
	int m = 0;
	m = *_n2;
	*_n2 = *_n1;
	*_n1 = m;
}

int main()
{
	int n1 = 1, n2 = 2;
	changeInt(&n1, &n2);
	cout << "n1=" << n1 << endl << "n2=" << n2 << endl;
	system("pause");
    return 0;
}

