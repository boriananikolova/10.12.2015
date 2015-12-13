// pointerr2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void reverse(int _arr[], int _n)
{
	for (int i = _n - 1; i >= 0; i--)
		cout << _arr[i];
}
int main()
{
	const int n = 5;
	int arr[n]{ 1,2,3,4,5 };
    reverse(arr, n);
	system("pause");
	return 0;
}



