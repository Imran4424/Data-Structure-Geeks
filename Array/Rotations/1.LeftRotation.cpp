/*
	https://www.geeksforgeeks.org/array-rotation/

	Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements.
*/

#include <iostream>
using namespace std;

void Rotation(int arr[], int aSize)
{
	int store = arr[0];

	for (int i = 0; i < aSize - 1; ++i)
	{
		arr[i] = arr[i+1];
	}

	arr[aSize - 1] = store;
}

void RotationHelper(int arr[], int aSize, int nTimes)
{
	for (int i = 0; i < nTimes; ++i)
	{
		Rotation(arr, aSize);
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

	RotationHelper(arr, aSize, nTimes);

	Display(arr, aSize);

	return 0;
}