/*
	https://www.geeksforgeeks.org/array-rotation/

	Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements.
*/

#include <iostream>
using namespace std;

// simple implementation of euclid rule

int GCD(int a, int b)
{
	if (0 == b)
	{
		return a;
	}

	return GCD(b, a % b); // this one take one more call if a <  b to swap

}

void Rotation(int arr[], int aSize, int nTimes)
{
	int stopPoint  = GCD(aSize, nTimes);

	for (int i = 0; i < stopPoint; ++i)
	{
		int store = arr[i];
	}
}


void ReadArray(int arr[], int aSize)
{
	cout << "enter the " << aSize << " elements of the array" << endl;

	for (int i = 0; i < aSize; ++i)
	{
		cin >> arr[i];
	}
}

void Display(int arr[], int aSize)
{
	for (int i = 0; i < aSize; ++i)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}

int main(int argc, char const *argv[])
{
	cout << "enter the size of the array" << endl;

	int aSize;
	cin >> aSize;

	int arr[aSize];

	ReadArray(arr, aSize);

	Display(arr, aSize);

	cout << "how many elements" << endl;

	int nTimes;
	cin >> nTimes;

	Rotation(arr, aSize, nTimes);

	Display(arr, aSize);

	return 0;
}