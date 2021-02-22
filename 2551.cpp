//두 대표 자연수 (골드3)
#include <iostream>
#include <vector>
#include <set>
#include <cmath>
#include <time.h>
using namespace std;

int main() {
	//ios_base::sync_with_stdio(false);
	//cin.tie(nullptr);

	int N; scanf("%d", &N);//cin >> N;
	vector<int> v1;
	vector<int> v2;
	int push;

	time_t start, end;
	double result;

	start = time(NULL);
	
	for (int i = 0;i < N;i++)
	{
		scanf("%d", &push);// >> push;
		v1.push_back(push);
	}

	//cin.ignore();

	set<int> s(v1.begin(), v1.end());

	set<int>::iterator iter;

	for (iter = s.begin(); iter != s.end();iter++)
	{
		v2.push_back(*iter);
	}

	
	//차이의 합
	int abs_sum = 0;
	int abs_min;
	int abs_result = 10001;

	for (int i = 0;i < N;i++)
	{
		abs_sum += abs(v2[0] - v1[i]);
	}

	abs_min = abs_sum;
	abs_result = v2[0];
	int a = v2[v2.size()-1];

	for (int i = v2[0]+1;i < a;i++)
	{
		abs_sum = 0;
		for (int j = 0;j < N;j++)
		{
			abs_sum += abs(i - v1[j]);
		}
		if (abs_sum < abs_min||abs_result>i)
		{
			abs_min = abs_sum;
			abs_result = i;
		}
	}
	
	printf("%d ", abs_result);
	//cout << abs_result << " ";

	//차이의 제곱의 합
	int Sq_sum = 0;
	int Sq_min;
	int Sq_result = 10001;

	for (int i = 0;i < N;i++)
	{
		Sq_sum += pow(abs(v2[0] - v1[i]), 2);
	}

	Sq_min = Sq_sum;
	Sq_result = v2[0];
	int b = v2[v2.size() - 1];

	for (int i = v2[0] + 1;i < b;i++)
	{
		Sq_sum = 0;
		for (int j = 0;j < N;j++)
		{
			Sq_sum += pow(abs(i - v1[j]),2);
		}
		if (Sq_sum < Sq_min || Sq_result>i)
		{
			Sq_min = Sq_sum;
			Sq_result = i;
		}
	}
	
	printf("%d ", Sq_result);

	//cout << Sq_result;

	end = time(NULL);
	result = (double)(end - start);
	printf("%f", result);
	return 0;
}