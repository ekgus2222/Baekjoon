#include<iostream>
#include<string>
using namespace std;

int main() {
	int N;
	string OX;
	int bonus = 0;
	int result = 0;

	cin >> N;
	cin >> OX;

	for (int i = 0;i < N;i++) {
		if (OX[i] == 'O') {
			result += (i + 1+bonus);
			bonus++;
		}
		else if (OX[i] == 'X') {
			bonus = 0;
		}
	}

	cout << result;

	return 0;
}