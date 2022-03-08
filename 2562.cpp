#include<iostream>

using namespace std;

int main(void) {

	int num[9] = { 0 };
	cin >> num[0];
	int max = num[0];
	int index = 1;
	for (int i = 1; i < 9; i++)
	{
		cin >> num[i];
		if (max < num[i])
		{
			max = num[i];
			index = i+1;
		}
	}
	cout << max << endl << index;
	return 0;
}