#include<iostream>

using namespace std;

int main(void) {

	int N;
	int min, max;
	cin >> N;
	int* num = new int[N];

	for (int i = 0; i < N; i++)
	{
		cin >> num[i];
	}
	min = max = num[0];
	for (int i = 1; i < N; i++)
	{
		if (min > num[i]) min = num[i];
		if (max < num[i]) max = num[i];
	}

	cout << min << " " << max << endl;
	return 0;
}

//퀵 정렬 하고 맨앞 맨뒤 수 뽑아내는게 나은가??