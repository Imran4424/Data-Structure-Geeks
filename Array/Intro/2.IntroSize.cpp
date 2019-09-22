#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	cout << "enter the size" << endl;

	int size;
	cin >> size;

	int arr[size];

	cout << "enter the " << size << " elements of the array" << endl;

	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];

		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}