#include<iostream>
#include<conio.h>
using namespace std;
int binsearch(int low, int high, int x, int A[])
{
	int mid;
	if (low > high)
		return false;
	else
	{
		mid = (low + high) / 2;
		if (x == A[mid])
			return mid;
		else if (x < A[mid])
			return binsearch(low, mid - 1, x, A);
		else
			return binsearch(mid + 1, high, x, A);
	}
}


