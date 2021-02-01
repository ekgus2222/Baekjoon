/// <�����Ա�> <���ݼ��� ���� ������ ��ȣ�� ����Ѵ�>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n; cin >> n; // ���� ����
    long long T, T_num, num; // ���� ��, ���� ��ȣ, ��ȣ�� �����
    int j = 0;
    vector<long long> ground; // �� �����
    //map<long long, int> max; // �� ��ȣ�� �ְ�� ���� ���� ��ȣ

    for (int i = 0; i < n; i++) { // 2���� �迭 ���� �� �� �Է¹ޱ�
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
                if (T_num > (ground.size() / 2)) break; // ���ݼ��� �Ѵ� ���� �� �� �̻��� �� ����
            }
            else {
                num = ground[j]; T_num = 1;
            }
            //cout << "num : T_num /" << num << " : " << T_num << endl;
        }

        if (j == ground.size()) cout << "SYJKGW"; // ���ݼ��� ���簡 ������ SYJKGW ���
        else cout << num;
        cout << "\n";
       
    }

    return 0;
}