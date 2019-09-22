#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[10];

	cout << "enter 10 elements of array" << endl;

	for (int i = 0; i < 10; ++i)
	{
		cin >> arr[i];

		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}