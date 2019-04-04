#include <iostream>

using namespace std;


int main(){
    int num;
    cin >> num;

    int dp[num+1];


    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    for(int i = 3; i <= num; i ++){
        dp[i] = dp[i-1] + 1;
        if(i%2 == 0){
            dp[i] = min(dp[i], dp[i/2]+1);
        }if(i%3 == 0){
            dp[i] = min(dp[i],dp[i/3]+1);
        }
    }

    cout << dp[num];

}