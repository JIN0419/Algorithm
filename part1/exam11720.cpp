#include <iostream>

using namespace std;

int main(){

    int a;
    scanf("%d",&a);

    char str[a];

    scanf("%s", &str);

    int sum = 0;
    for(int i = 0; i < a; i++){
        sum = sum + int(str[i]) - 48;
    }
    cout << sum;
}