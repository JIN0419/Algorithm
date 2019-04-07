#include <iostream>

using namespace std;

int main(){
    int n;

    cin >> n;

    int ways[n+1];

    ways[1] = 1;
    ways[2] = 2;

    for(int i = 3; i <= n; i++){
        ways[i] = ways[i-1] + ways[i-2];
    }
    int result = ways[n];
    cout << result%10007;
}