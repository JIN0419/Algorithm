#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    int c;

    cin >> a >> b >> c ;

    int mid;

    if((a >= b && a <= c)||(a >= c && a <= b)){
        cout << a;
    }else if(( a <= b && b <= c)||( c <= b && b <= a)){
        cout << b;
    }else{
        cout << c;
    }
}