//선언 for문에 넣지 말기
//main 문 맨 앞 세 줄
//auto end = wordFreq.end();


#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
#include<sstream>

#include <chrono>
#include <iostream>
#include <cmath>


using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    int k;
    string str;
    cin >> n;
    //std::chrono::system_clock::time_point start = std::chrono::system_clock::now();
    // vector<string> result_global;
    vector<string> result_local;
    unordered_map<string, int> wordFreq;
    string word;
    stringstream ss;
    unordered_map<string, int>::iterator p;

    for (int i = 0; i < n; i++) {
        result_local.clear();
        wordFreq.clear();

        cin >> k;

        getline(cin, str);
        ss.clear();
        ss.str(str);

        while (ss >> word) wordFreq[word]++;

        auto end = wordFreq.end();
        for (p = wordFreq.begin(); p != end; p++) {
            if ((p->second) > (k / 2)) {
                result_local.push_back(p->first);
            }
        }

        if (result_local.empty()) {
            //result_local.push_back("SYJKGW");
            cout << "SYJKGW\n";
        }
        else {
            cout << result_local[0] << '\n';
        }
        //result_global.push_back(result_local[0]);
    }

    /*vector<string>::iterator it;
    for (it = result_global.begin(); it != result_global.end(); it++) {
        cout << *it << '\n';
    }*/

    //std::chrono::duration<double> sec = std::chrono::system_clock::now() - start;
    //std::cout << "Test() 함수를 수행하는 걸린 시간(초) : " << sec.count() << " seconds" << std::endl;
    return 0;
}