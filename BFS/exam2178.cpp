#include <iostream>
#include <string>
#include <queue>
#define MAX 100

using namespace std;

int map[MAX][MAX];
int N,M;
int result[MAX][MAX];

struct Dir{
    int y,x;
};

Dir mv[4] = { {0,1},{1,0},{-1,0},{0,-1} };


int bfs(int i, int j){
    queue<pair<int,int>> q;
    q.push({i,j});
    result[i][j] = 1;
    
    while(!q.empty()){
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        
        if( y == N && x == M)    break;
        
        for(int i = 0; i < 4; i++){
            int ny = y + mv[i].y;
            int nx = x + mv[i].x;
            
            if(ny >= 0 && nx >= 0 && ny < N && nx <M && !result[ny][nx] && map[ny][nx]){
                result[ny][nx] = result[y][x] + 1;
                q.push( {ny, nx} );
            }
        }
    }

}


int main()
{
    cin >> N >> M;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf("%1d", &map[i][j]);
        }
    }
    
    bfs(0,0);
    cout << result[N-1][M-1];
}
