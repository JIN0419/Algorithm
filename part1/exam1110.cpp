#include <iostream>

using namespace std;

int main(){
    
    int get;

    cin >> get;

    int num = get;
    int new_num = -1;
    int count = 0;
    int sum = 0;

    while(new_num != get){

        sum = num%10 + num/10;
        new_num = (num%10)*10 + sum%10;
        num = new_num;
        count ++;
    }

    cout << count;


}