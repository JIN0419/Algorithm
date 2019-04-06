#include <iostream>

using namespace std;

int d(int num){
    int result;
    result = num;
    while(num != 0){
        result += num%10;
        num = num/10;
    }
    return result;
}

int main(){
    bool check[10001] = {false};
    int visit;
    for(int i = 1; i <= 10000; i++){
        visit = d(i);
        if(visit <= 10000){
            check[visit] = true;
        }
    }
    
    for(int j = 1; j <= 10000; j++){
        if(check[j] == false){
            cout << j << '\n';
        }
    }
    

}