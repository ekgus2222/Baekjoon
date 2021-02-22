//색종이 (브론즈1)
#include <iostream>
#include <map>
using namespace std;

int main() {

	int arr[101][101];
	fill(&arr[0][0],&arr[100][101],-1);

	int N; cin >> N;
	map<int, int> m;

	int a, b, c, d;

	for (int k = 0;k < N;k++) {
		cin >> a >> b >> c >> d;

		for (int i = b;i < b + d;i++) {
			for (int j = a;j < a + c;j++)
				arr[i][j] = k;
		}

		m[k] = 0;
	}
	

	for (int i = 0;i < 101;i++) {
		for (int j = 0;j < 101;j++) {
			m[arr[i][j]]++;
		}
	}

	map<int, int> ::iterator iter;
	
	for (iter = m.begin();iter != m.end();iter++) {
		if (iter == m.begin()) continue;

		cout << iter->second << '\n';
	}
	
	return 0;
}