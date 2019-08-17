// Example program
#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;


int N,M;
vector<vector<int>> fl;
vector<bool> visited;
int cnt;

void dfs(){
    stack<int> st;
    st.push(1);
    visited[1] = true;
    
    while(!st.empty()){
        int cur = st.top();
        st.pop();
        
        for(int i = 0; i < fl[cur].size(); i++){
            if(!visited[fl[cur][i]]){
                st.push(fl[cur][i]);
                visited[fl[cur][i]] = true;
                cnt ++;
            }
        }
    }
}

int main()
{
    int tc; 
    cin >> tc;
    
    for(int t = 0; t < tc; t++){
        scanf("%d %d", &N, &M);

        cnt = 0;
        visited.resize(N+1);
        fl.resize(N+1);
        for(int i = 1; i <= N; i++){
            visited[i] = false;
            fl[i].clear();
        }
        fl.clear();
        fl.resize(N+1);
        
        int f1,f2;
        for(int f = 0; f < M; f++){
            scanf("%d %d", &f1, &f2);
            fl[f1].push_back(f2);
            fl[f2].push_back(f1);
        }
        dfs();
        cout << cnt << '\n';
    }
}
