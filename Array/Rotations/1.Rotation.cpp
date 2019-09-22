/*
	https://www.geeksforgeeks.org/array-rotation/

	Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements.
*/

#include <iostream>
using namespace std;

void ReadArray(int arr[], int aSize)
{
	cout << "enter the " << aSize << " elements of the array" << endl;

}

int main(int argc, char const *argv[])
{
	cout << "enter the size of the array" << endl;

	int aSize;
	cin >> aSize;

	int arr[aSize];

	ReadArray(int arr, int aSize);


	return 0;
}