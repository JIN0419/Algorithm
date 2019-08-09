#include <iostream>
#include <queue>
#include <algorithm>
#include <stack>
#define MAX 100
using namespace std;


void search(int arr[MAX][MAX], int start, int n){
    int visited[n] = {0};
    stack<int> st;
    
    st.push(start);

    while (!st.empty()){
        int cur = st.top();
        st.pop();
        
        for(int j = 0; j < n; j++){
            if(arr[cur][j] && visited[j]==0 ){
                st.push(j);
                visited[j] = 1;
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        if(visited[i])  arr[start][i]= 1;
    }
}

int main(){

    int N;
    cin >> N;
    
    int arr[MAX][MAX];
    
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    
    for(int i = 0; i < N; i++){
        search(arr, i, N);
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
    
}