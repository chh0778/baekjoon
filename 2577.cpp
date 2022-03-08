#include<iostream>
#include<math.h>
using namespace std;

int main(void) {
	
	int a,b,c;
	int cnt[10] = { 0  };
	int num[10] = { 0 };
	int digit = 9;
	cin >> a >> b >> c;
	int res = a * b * c;

	for (int i = 8; i >=0; i--)
	{
		num[i+1] = res / (int)pow(10, i);	//인덱스랑 자릿수랑 동일
		res = res - num[i + 1] * (int)pow(10, i);
	}

	for (int i = 9;; i--) {
		if (num[i] != 0) break;
		digit--;
	}

	for (int i = 1; i <= digit; i++)
	{
		switch (num[i]) {
		case 0:
			cnt[0]++;
			break;
		case 1:
			cnt[1]++;
			break;
		case 2:
			cnt[2]++;
			break;
		case 3:
			cnt[3]++;
			break;
		case 4:
			cnt[4]++;
			break;
		case 5:
			cnt[5]++;
			break;
		case 6:
			cnt[6]++;
			break;
		case 7:
			cnt[7]++;
			break;
		case 8:
			cnt[8]++;
			break;
		case 9:
			cnt[9]++;
			break;
		}
	}
	for (int i = 0; i < 10; i++)
		cout << cnt[i] << endl;
	
	return 0;
}


//1,000,000

//7자리부터 10자리까지
//1,000,000~999,999,999