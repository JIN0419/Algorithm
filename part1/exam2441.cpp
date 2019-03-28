#include <iostream>

using namespace std;

int main(){
    int a;
    scanf("%d",&a);

    for(int i = 0; i < a; i++){
        for(int j = 0; j < i ; j++){
            cout << " ";
        }for(int k = a-i; k > 0; k--){
            cout << "*";
        }
        cout << '\n';
    }
}