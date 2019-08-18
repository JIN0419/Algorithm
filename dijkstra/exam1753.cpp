#include <iostream>
#include <string>
#include <vector>
#include <queue>
#define INF 987654321

using namespace std;
int start,V,E;


int main(){
    scanf("%d %d", &V, &E);
    cin >> start;
    
    vector<pair<int,int>> g[V+1];
    
    int d[V+1];
    for(int i = 1; i <= V; i++){
        d[i] = INF;
    }
    d[start] = 0;
    
    int u,v,w;
    for(int c = 0; c < E; c++){
        scanf("%d %d %d", &u, &v, &w);
        g[u].push_back({v,w});
    }
    
    priority_queue<pair<int,int>> q;
    q.push({0,start});
    
    while(!q.empty()){
        int cur = q.top().second;   //노드 번호
        int cost = -1*q.top().first;    //비용, 거리가 작은 정점부터 꺼내지게
        q.pop();
        
        for(int i = 0; i < g[cur].size(); i++){
            int new_w = d[cur] + g[cur][i].second; //현재 노드까지의 거리 + 목적 노드간의  가중치
            int original_w = d[g[cur][i].first];    //목적 노드까지의 가중치
            
            if(new_w < original_w){
                d[g[cur][i].first] = new_w;
                q.push( { -1*new_w, g[cur][i].first} );
            }
        }
    }
    
    for(int i = 1; i <= V; i++){
        if (d[i] != INF){
            cout << d[i] << '\n';
        }else{
            cout << "INF\n";
        }
    }
}
