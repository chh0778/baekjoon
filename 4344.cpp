#include<iostream>

using namespace std;

struct a {


};
int main(void) {

	int C;
	int cnt=0;
	cin >> C;						//테스트 케이스
	int* student_num = new int[C];
	double* avg = new double[C]();
	double* per = new double[C]();
	for (int i = 0; i < C; i++)
	{
		cin >> student_num[i];		//테스트 당 인원수
		int* score = new int[student_num[i]];
		for (int j = 0; j < student_num[i]; j++)
		{
			cin >> score[j];		//인원 당 점수
			avg[i] += score[j];		//테스트 당 
		}
		avg[i] = (double)avg[i] / student_num[i];
		for (int j = 0; j < student_num[i]; j++)
		{
			if (avg[i] < score[j])
				cnt++;
		}
		per[i] = (double)cnt / student_num[i] * 100;
		cnt = 0;
	}
	cout << fixed;
	cout.precision(3);
	for (int i = 0; i < C; i++)
	{
		cout << per[i] << "%" << endl;

	}
	return 0;
}