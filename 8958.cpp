#include<iostream>
#include<math.h>
using namespace std;

int main(void) {
	
	int C;
	cin >> C;
	string* str = new string[C];
	int* sum = new int[C]();
	int cur_s;
	int prev_s;
	for (int i = 0; i < C; i++){
		cin >> str[i];
		
		for (int j = 0; j < str[i].size(); j++){
			if (j == 0){
				if (str[i][j] == 'O'){
					sum[i] += 1;
					prev_s = 1;
				}
				else {
					prev_s = 0;
				}
			}
			else {				//j>0
				if (str[i][j] == 'O') {
					if (str[i][j - 1] == 'O') {	//이전: o, 지금: o
						cur_s = prev_s + 1;
						sum[i] += cur_s;
						prev_s = cur_s;
					}
					else {						//이전: x, 지금: o
						cur_s = 1;
						sum[i] += cur_s;
						prev_s = cur_s;
					}
				}
				else {							//지금: x
					prev_s = 0;
				}
			}

		}
		prev_s = 0;
		cur_s = 0;
	}
	for (int i = 0; i < C; i++) {
		cout << sum[i] << endl;
	}


	delete[] str;
	delete[] sum;
	return 0;
}

