#include<iostream>
#include<math.h>
using namespace std;

int main(void) {
	
	int* num = new int[10];
	int* r = new int[10];
	int* r42 = new int[42]();
	int cnt=0;
	for (int i = 0; i < 10; i++)
	{
		cin >> num[i];
		r[i] = num[i] % 42;
		r42[r[i]]++;
	}
	for (int i = 0; i < 42; i++)
	{
		if (r42[i] != 0)
			cnt++;
	}
	cout << cnt;
	//10개의 수를 서로 비교하여 같은 수를 찾는 알고리즘
	// 
	//10개의 수가 0부터 41중 어느 수인지 세는 알고리즘


	delete[] r;
	delete[] r42;
	delete[] num;
	return 0;
}


//1,000,000

//7자리부터 10자리까지
//1,000,000~999,999,999