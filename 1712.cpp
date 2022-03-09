#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main() {
	long long a, b, c;
	long long i;
	cin >> a >> b >> c;

	if (b >= c) {
		cout << -1;
		return 0;
	}

	cout << (int)floor(a / (c - b)+1);

	return 0;

}