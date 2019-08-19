#include <iostream>
#include <string>
#include <queue>
#define INF 987654321;

using namespace std;

int main()
{
    int N,M;
    cin >> N;
    cin >> M;
    
    int d[N+1];
    for(int i = 1; i <= N; i++){
        d[i] = INF;
    }
    
    vector<pair<int,int>> graph[N+1];
    //bool visited[N+1];
    
    int u,v,w, start, des;
    for(int c = 0; c < M; c++){
        scanf("%d %d %d", &u, &v, &w);
        graph[u].push_back({v,w});
    }
    scanf("%d %d", &start, &des);
    
    d[start] = 0;
    priority_queue<pair<int,int>> q;
    q.push({0, start});
    
    while(!q.empty()){
        int cur = q.top().second;
        int cost = -1*q.top().first;
        q.pop();
        
        for(int i = 0; i < graph[cur].size(); i++){
            int newCost = d[cur] + graph[cur][i].second;
            int originalCost = d[graph[cur][i].first];
            
            if( newCost < originalCost){
                d[graph[cur][i].first] = newCost;
                q.push( { -1*newCost, graph[cur][i].first } );
            }
        }
    }
    
    cout << d[des];
    
}