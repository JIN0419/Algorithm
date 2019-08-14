// Example program
#include <iostream>
#include <string>
#include <queue>
#define MAX 100

using namespace std;

int N, cnt;
char rgb[MAX][MAX];
bool visited[MAX][MAX];
queue<pair<int,int>> q;

struct Dir{
    int y,x;
};

Dir dir[4] = { {0,-1}, {0,1}, {1,0}, {-1,0}};

void bfs(int y, int x){
    char curChar = rgb[y][x];
    q.push( {y,x});
    
    
    while(!q.empty()){
        int cury = q.front().first;
        int curx = q.front().second;
        visited[cury][curx] = true;
        q.pop();
        
        
        for(int i = 0; i < 4; i++){
            int ny = cury + dir[i].y;
            int nx = curx + dir[i].x;
            
            if(rgb[ny][nx] == curChar && !visited[ny][nx] && ny >=0 && nx >= 0 && ny <N && nx < N){
                visited[ny][nx] = true;
                q.push( {ny,nx});
            }
        }
    }
    cnt ++;
}




int main()
{
    cin >> N;
    for(int i =0; i < N; i++){
        cin >> rgb[i];
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(!visited[i][j]){
                bfs(i,j);
            }
        }
    }
    cout << cnt << ' ';
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(rgb[i][j] == 'R'){
                rgb[i][j] = 'G';
            }
            visited[i][j] = false;
        }
    }
    
    cnt = 0;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(!visited[i][j]){
                bfs(i,j);
            }
        }
    }
    
    cout << cnt;
    
}
