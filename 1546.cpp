#include<iostream>
#include<math.h>
using namespace std;

int main(void) {
	
	int N;
	cin >> N;
	int max;
	int* num = new int[N];
	int sum = 0;
	double avg=0;
	cin >> num[0];

	max = num[0];
	sum += num[0];
	for (int i = 1; i < N; i++)
	{
		cin >> num[i];
		if (max < num[i]) max = num[i];
		sum += num[i];
	}
	
	avg = (double)sum * 100 / max / N;

	//cout << fixed;
	//cout.precision(1);

	cout << avg;

	return 0;
}