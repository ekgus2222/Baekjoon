//부등호 (실버2)

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define MAX 10
using namespace std;

int Arr[MAX];
bool Select[MAX];
vector<int> V;
vector<string> result;

void Print(int k,char* b)
{
    string num;

    num += to_string(V[0]);

    for (int i = 0; i < V.size(); i++)
    {
        if (b[i] == '<' && V[i] < V[i + 1]) {
            num += to_string(V[i + 1]);
        }
        else if (b[i] == '>' && V[i] > V[i + 1]) {
            num += to_string(V[i + 1]);
        }
        else break;
    }

    if (num.size() == k + 1) result.push_back(num);
}


void DFS(int Cnt,int k, char* b)
{
    if (Cnt == k+1)
    {
        Print(k,b);
        return;
    }

    for (int i = 0; i < MAX; i++)
    {
        if (Select[i] == true) continue;
        Select[i] = true;
        V.push_back(Arr[i]);
        DFS(Cnt + 1,k,b);
        V.pop_back();
        Select[i] = false;
    }
}

int main(void)
{
    int k; cin >> k;
    char* b;  b = new char[k];
    
    for (int i = 0;i < k;i++) {
        cin >> b[i];
    }

    for (int i = 0;i < MAX;i++) {
        Arr[i] = i;
    }

    DFS(0,k,b);

    cout << result[result.size() - 1] << "\n" << result[0];
}




//순열 응용해서 풀었음 -> 시간이 너무 오래 걸림