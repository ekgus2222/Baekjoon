#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
#include<sstream>

using namespace std;

int main() {
	int n;
	int k;
	string str;
	cin >> n;

	vector<string> result_global;

	for (int i = 0;i < n;i++) {
		vector<string> result_local;
		unordered_map<string, int> wordFreq;

		cin >> k;


		getline(cin, str);

		stringstream ss(str);
		string word;
		while (ss >> word) wordFreq[word]++;

		unordered_map<string, int>::iterator p;
		for (p = wordFreq.begin();p != wordFreq.end();p++) {
			if ((p->second) > (k / 2)) {
				result_local.push_back(p->first);
			}
		}

		if (result_local.empty()) {
			result_local.push_back("SYJKGW");
		}


		result_global.push_back(result_local[0]);
		//result_local.clear();

	}

	vector<string>::iterator it;
	for (it = result_global.begin();it != result_global.end();it++) {
		cout << *it << endl;
	}

	return 0;




}
