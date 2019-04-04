#include <iostream>

using namespace std;


int main(){

    int num;
    cin >> num;

    int score[num];
    int dp[num];
    
    for(int i = 0; i <num; i++){
        cin >> score[i];
        dp[i] = 0;
    }

    dp[0] = score[0];
    dp[1] = score[0] + score[1];
    dp[2] = max(score[0]+score[2], score[1]+score[2]);
    for(int i = 3; i < num; i++){
        dp[i] = max(dp[i-2]+score[i], score[i]+score[i-1]+dp[i-3]);
    }

    cout << dp[num-1];


}
