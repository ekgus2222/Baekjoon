//�Ҿ���� ��ȣ(�ǹ� 2)
#include<stdio.h>
#include<string>
#include<string.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(void)
{
    string str;
    char str_cp[55];
    vector<string> num_vec;
    vector<string> op_vec;
    vector<string> all_vec;
    string op;
    vector<int> last_que;
    int k = 0;
    int result;
    bool minus = false;


    cin >> str;


   //������ vector�� ���
    for (int i = 0;i < str.size();i++) {
        if (str[i] == '+' || str[i] == '-') {
            op = str[i];

            op_vec.push_back(op);
        }
    }

    strcpy(str_cp, str.c_str());

    char* ptr = strtok(str_cp, "+-");    //�����ڴ� "+-"

    while (ptr != NULL)
    {
        num_vec.push_back(ptr);
        ptr = strtok(NULL, "+-");
    }


    for (int i = 0;i < op_vec.size();i++) {
        all_vec.push_back(num_vec[i]);
        all_vec.push_back(op_vec[i]);
    }

    all_vec.push_back(num_vec[num_vec.size() - 1]);


    //���
    last_que.push_back(atoi(all_vec[0].c_str()));
    int a = last_que[0];

    for (int i = 1;i < all_vec.size();i++) {
        if (all_vec[i]!="-"&&all_vec[i]!="+"&&minus == false)
        {
            a += atoi(all_vec[i].c_str());
            last_que.clear();
            last_que.push_back(a);
            continue;
        }
        if (all_vec[i] == "-") {
            minus = true;
            last_que.push_back(k);
            k = 0;
        }
        else if(all_vec[i] == "+");
        else {
            k += atoi(all_vec[i].c_str());
        }

        if (i == all_vec.size() - 1) {
            last_que.push_back(k);
        }

    }



    //���� ���
    result = last_que[0];

    vector<string>::iterator iter;
    
    iter = find(op_vec.begin(), op_vec.end(), "-");
    
    if (iter != op_vec.end()) {
        for (int i = 1;i < last_que.size();i++) {
            result -= last_que[i];
        }
    }
    else {
        for (int i = 1;i < last_que.size();i++) {
            result += last_que[i];
        }
    }

    cout << result;


    return 0;
}





//ó���� Ǭ ����� flag�� - ����ؼ� - - ������ ���ڵ��� last_que�� push�ϰ� �������� �� ��. �̷��� �ߴ��� �� �ڿ� -�� ���� ��� �ν��� �ȵ���
//&-�� bool Ÿ������ ��Ҵ��� �̻��ϰ� ����.  �ֳĸ� 2��°���� �ݴ� -�� ���� -�� �����ϱ� ����
//�׷��� bool�� ���ְ� flag�� -�� all_vec.size()�� �ߴµ� �̻��ϰ� ����. +�� �ִ� ��츦 �������.
//+�� �ִ� ��츦 ����ߴµ� Ʋ��. �ֳĸ� -�� ������ �� +�� �ִ� ��츦 ������ؼ�
//����ߴ��� ����
