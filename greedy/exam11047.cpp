//baekjoon exam11047 동전 0

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int num;
    int price;
    scanf("%d %d",&num, &price);

    int value[num];

    for(int i = 0; i < num; i++){
        cin >> value[i];
    }

    int rest = price;
    int count = 0;
    for(int i = num-1; rest != 0; i--){
       if( value[i] <= rest){
            count += rest/value[i];
            rest = rest - value[i]*(rest/value[i]);
       }
    }
    
    cout << count;
}