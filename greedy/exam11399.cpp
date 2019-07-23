//baekjoon exam11399 ATM

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int num;
    scanf("%d",&num);

    int time[num];

    for(int i = 0; i < num; i++){
        scanf("%d",&time[i]);
    }

    sort(time, time+num);

    int wait = 0;
    int sum = 0;
    for(int i = 0; i < num; i++){
        wait = wait + time[i];
        sum += wait;
    }

    cout << sum;

}