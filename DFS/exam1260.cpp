#include <iostream>
#include <string>
#include <queue>    //bfs
#include <stack>    //dfs
#include <vector>
#include <algorithm>


using namespace std;

int N,M,start;

vector<vector<int>> graph;
vector<bool> visited;

vector<int> result;


int bfs(){
    queue<int> q;
    q.push(start);
    
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        
        if(!visited[cur]){
            visited[cur] = true;
            cout << cur << ' ';
            
            for(int i = 0; i < graph[cur].size(); i++){
                q.push(graph[cur][i]);
            }
        }
    }   
}

int dfs(){
    stack<int> st;
    st.push(start);
    
    while(!st.empty()){

        int cur = st.top();
        st.pop();
        
        if(!visited[cur]){
            visited[cur] = true;
            cout << cur << ' ';
            
            sort(graph[cur].begin(), graph[cur].end(), greater<int>());
            for(int i = 0; i < graph[cur].size(); i++){
                if(!visited[graph[cur][i]]){
                    st.push(graph[cur][i]);
                }
            }
        }
    }
}


int main()
{
    scanf("%d %d %d", &N,&M,&start);
    
    graph.resize(N+1);
    visited.resize(N+1);
    
    int n1, n2;
    for(int i = 0; i < M; i++){
        scanf("%d %d", &n1, &n2);
        graph[n1].push_back(n2);
        graph[n2].push_back(n1);
    }
    
    dfs();
    cout << '\n';
    for(int i = 1; i <= N ; i++){
        visited[i] = false;
    }
    for(int i = 1; i <= N; i++){
        sort(graph[i].begin(), graph[i].end());
    }
    bfs();
}
