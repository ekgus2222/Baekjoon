//잃어버린 괄호(실버 2)
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


   //나눠서 vector에 담기
    for (int i = 0;i < str.size();i++) {
        if (str[i] == '+' || str[i] == '-') {
            op = str[i];

            op_vec.push_back(op);
        }
    }

    strcpy(str_cp, str.c_str());

    char* ptr = strtok(str_cp, "+-");    //구분자는 "+-"

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


    //계산
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



    //최종 계산
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





//처음에 푼 방법은 flag로 - 사용해서 - - 사이의 숫자들을 last_que에 push하고 마지막에 다 뺌. 이렇게 했더니 맨 뒤에 -가 없는 경우 인식이 안됐음
//&-를 bool 타입으로 잡았더니 이상하게 나옴.  왜냐면 2번째부터 닫는 -는 여는 -와 동일하기 때문
//그래서 bool을 없애고 flag를 -와 all_vec.size()로 했는데 이상하게 나옴. +만 있는 경우를 고려안함.
//+만 있는 경우를 고려했는데 틀림. 왜냐면 -가 나오기 전 +만 있는 경우를 고려안해서
//고려했더니 맞음
