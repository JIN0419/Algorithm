#include <iostream>
#define MAX 13

using namespace std;

int set[MAX] = {0};
int combination[MAX] = {0};
int k;


void dfs(int start, int count){
    if(count == 6){
        for(int i = 0; i < 6; i++){
            cout << combination[i] << ' ';
        }
        cout << '\n';
    }
    else{
        for(int i = start; i < k; i++){
            combination[count] = set[i];
            dfs(i+1, count+1);
        }
    }
}

int main()
{
    while(cin >> k && k){
        for(int i =0; i <k; i++){
            cin >> set[i];
        }
        dfs(0,0);
        cout << '\n';
    }
}