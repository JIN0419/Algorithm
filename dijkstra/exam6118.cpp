#include <iostream>
#include <queue>
#include <vector>
#define INF 987654321

using namespace std;

vector<int> map[20001];
vector<int> d;

void dijkstra(){
    d[1] = 0;
    queue<int> q;
    q.push(1);
    
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        
        for(int i = 0; i < map[cur].size(); i++){
             if( d[cur] + 1 < d[map[cur][i]] ) {
                 d[map[cur][i]] = d[cur] + 1;
                 q.push( map[cur][i] );
             }
        }
    }
}


int main(){
    int N,M;
    cin >> N >> M;
    
    d.resize(N+1);
    int a,b;
    for(int i = 0; i < M; i++){
        scanf("%d %d", &a, &b);
        map[a].push_back(b);
        map[b].push_back(a);
    }
    
    for(int i = 1; i <= N ; i++){
        d[i] = INF;
    }
    
    dijkstra();
    
    int max = 0;
    int index, cnt;
    for(int i = 1; i <= N; i++){
        if( max < d[i] ){
            max = d[i];
            index = i;
            cnt = 1;
        }else if( max == d[i] ){
            cnt++;
        }
    }
    cout << index <<' '<< max <<' '<< cnt;
}


