#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main() {

	int N;
	vector<int> Pi;
	int pi;
	int sum = 0;
	int cnt;

	cin >> N;
	cnt = N;
	
	for (int i = 0;i < N;i++) {
		cin >> pi;
		Pi.push_back(pi);
	}


	sort(Pi.begin(), Pi.end());

	for (int i = 0;i < N;i++) {
		sum += (Pi[i] * cnt);
		cnt--;
	}

	cout << sum;

}