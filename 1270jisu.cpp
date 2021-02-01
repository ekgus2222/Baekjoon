/// <땅따먹기> <과반수의 땅을 차지한 번호를 출력한다>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n; cin >> n; // 땅의 개수
    long long T, T_num, num; // 병사 수, 병사 번호, 번호별 병사수
    int j = 0;
    vector<long long> ground; // 땅 만들기
    //map<long long, int> max; // 땅 번호와 최고로 많은 병사 번호

    for (int i = 0; i < n; i++) { // 2차원 배열 생성 후 땅 입력받기
        ground.clear();
        cin >> T;

        for (int k = 0; k < T; k++) {
            cin >> num;
            ground.push_back(num);
        }

        sort(ground.begin(), ground.end());

        num = ground[0];
        T_num = 0;

        for (j = 0; j < ground.size(); j++) {
            if (num == ground[j]) {
                T_num++;
                if (T_num > (ground.size() / 2)) break; // 과반수를 넘는 수가 두 개 이상일 수 없음
            }
            else {
                num = ground[j]; T_num = 1;
            }
            //cout << "num : T_num /" << num << " : " << T_num << endl;
        }

        if (j == ground.size()) cout << "SYJKGW"; // 과반수의 병사가 없으면 SYJKGW 출력
        else cout << num;
        cout << "\n";
       
    }

    return 0;
}