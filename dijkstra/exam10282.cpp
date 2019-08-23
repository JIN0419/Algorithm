#include <iostream>
#include <string>
#include <vector>
#include <queue>
#define INF 987654321

using namespace std;
int tc;
int n,d,c;

struct elm{
    int des, tm;
};

vector<elm> map[10001];
vector<int> result;

void dijkstra(int start){
    result[start] = 0;
    queue<int> q;
    q.push(start);
    
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        
        for(int i = 0; i < map[cur].size(); i++){
            int newTime = result[cur] + map[cur][i].tm;
            int originalTime =  result[map[cur][i].des];
            if( newTime < originalTime ) {
                result[map[cur][i].des] = newTime;
                q.push( map[cur][i].des );
            }
        }
    }
}

int main()
{
    cin >> tc;
    for(int t = 0; t < tc; t++){
        scanf("%d %d %d", &n, &d, &c); 
        
        result.resize(n+1);
        for(int j = 1; j <= n; j++){
            map[j].clear();
            result[j] = INF;
        }

        for(int i = 0; i < d; i++){
            int a,b,s;
            scanf("%d %d %d", &a, &b, &s);
            map[b].push_back({a,s});
        }
        
        dijkstra(c);
        
        int cnt = 0;
        int max = 0;
        for(int k = 1; k <= n; k++){
            if(result[k] == INF){
                cnt ++;
            }else{
                if( result[k] > max ){
                    max = result[k];
                }
            }
        }
        cout << n-cnt <<' ' <<  max << '\n';
    }

}
