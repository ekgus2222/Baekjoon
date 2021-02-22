//대표 자연수 (실버3)
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N; cin >> N;
	vector<int> v1;
	vector<int> v2;
	int push;
	int sum = 0;
	int result;

	int min;

	for (int i = 0;i < N;i++) 
	{
		cin >> push;
		v1.push_back(push);
	}

	cin.ignore();

	set<int> s(v1.begin(), v1.end());

	set<int>::iterator iter;

	for (iter = s.begin(); iter != s.end();iter++) 
	{
		v2.push_back(*iter);
	}

	for (int i = 0;i <N ;i++) 
	{
		sum += abs(v2[0] - v1[i]);
	}
	
	min = sum;
	result = v2[0];
	int a = v2.size();

	for (int i = 1;i < a;i++) 
	{
		sum = 0;
		for (int j = 0;j < N;j++) 
		{
			sum += abs(v2[i] - v1[j]);
		}
		if (sum < min) 
		{
			min = sum;
			result = v2[i];
		}
	}

	cout << result;


}


//완전탐색으로 풀었음 -> 시간 오래걸림
//ios_base::sync_with_stdio(false); cin.tie(nullptr); cin.ignore(); 시간 별로 안줄어듦.