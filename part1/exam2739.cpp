#include <iostream>

using namespace std;

int main(){
    int num;
    scanf("%d", &num);

    for(int i = 1 ; i <= 9 ; i++){
        cout <<num << " * " << i << " = "<< num*i << "\n";
    }
}