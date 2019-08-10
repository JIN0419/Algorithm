#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 25

using namespace std;

char arr[MAX][MAX]= {0};
int N;
bool visited[MAX][MAX];
vector<int> result;
int cnt;


int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,-1,1};

void dfs(int x, int y){
    cnt ++;
    visited[x][y] = true;
    
    for(int d = 0; d < 4; d++){
        int ny = y + dy[d];
        int nx = x + dx[d];
        
        if(nx >= 0 && ny >= 0 && nx < N && ny < N){
            if(arr[nx][ny]=='1' && !visited[nx][ny]){
                dfs(nx, ny);
            }
        }
    }
}


int main()
{
    cin >> N;
    
    for(int i =0; i < N; i++){
        cin >> arr[i];
    }
    
    for(int i =0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(!visited[i][j] && arr[i][j] == '1'){
                cnt = 0;
                dfs(i,j);
                result.push_back(cnt);
            }
        }
    }
    
    sort(result.begin(), result.end());
    
    cout << result.size() << '\n';
    
    for( int i = 0; i < result.size(); i++){
        cout << result[i] << '\n';
    }
}
