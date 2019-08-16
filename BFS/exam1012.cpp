#include <iostream>
#include <string>
#include <queue>
#define MAX 50

using namespace std;

int M,N,K;
int arr[MAX][MAX] = {0};
bool visited[MAX][MAX];

struct Dir{
    int y,x;
};

Dir dir[4] = {{0,1},{0,-1},{-1,0},{1,0}};


void bfs(int y, int x){
    queue<pair<int,int>> q;
    q.push({y,x});
    visited[y][x] = true;
    
    while(!q.empty()){
        pair<int,int> cur = q.front();
        q.pop();
        
        for(int i = 0; i < 4; i++){
            int ny = cur.first + dir[i].y;
            int nx = cur.second + dir[i].x;
            if( ny>=0 && nx>=0 && ny<N && nx<M && arr[ny][nx] == 1 && !visited[ny][nx] ){
                visited[ny][nx] = true;
                q.push({ny,nx});
            }
        }
    }
}


int main()
{
    int testNum;
    scanf("%d", &testNum);
    
    for(int i = 0; i < testNum; i++){
        scanf("%d %d %d",&M, &N, &K);
        
        int x,y;
        int cnt = 0;
        for(int initi = 0; initi < N; initi++){     
            for(int initj = 0; initj < M; initj++){
                arr[initi][initj] = 0;
                visited[initi][initj] = false;
            }
        }
    
        for(int j = 0; j < K; j++){
            scanf("%d %d",&x, &y);
            arr[y][x] = 1;
        }
        for(int yy = 0; yy < N; yy++){
            for(int xx = 0; xx < M; xx++){
                if(arr[yy][xx] == 1 && !visited[yy][xx]){
                    bfs(yy,xx);
                    cnt++;
                }
            }
        }
        cout << cnt << '\n';
    }
}
