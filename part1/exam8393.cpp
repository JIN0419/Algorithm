#include <iostream>

using namespace std;

int main(){
    int a;
    scanf("%d",&a);

    int sum = 0;

    for(int i = a; i >= 1; i--){
        sum = sum + i;
    }

    cout << sum;
}