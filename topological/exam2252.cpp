#include <iostream>
#include <string>
#include <queue>

using namespace std;
int N, M;
int inDegree[32001];
vector<int> seq[32001];

void bfs(){
    queue<int> result;
    for(int i = 1; i <=N; i++){
        if(inDegree[i] == 0){
            result.push(i);
        }
    }
    while(!result.empty()){
        int cur = result.front();
        cout << cur << ' ';
        result.pop();
        
        for(int i = 0; i < seq[cur].size(); i++){
            int node = seq[cur][i];
            inDegree[node] --;
            if( inDegree[node] == 0 ){
                result.push(node);
            }
        }
    }
}

int main()
{
    scanf("%d %d",&N, &M);
    int a, b;
    for(int i = 0; i < M; i++){
        scanf("%d %d", &a, &b);
        seq[a].push_back(b);
        inDegree[b] ++;
    }
    
    bfs();
}