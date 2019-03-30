#include <iostream>

using namespace std;

int main(){

    int count;
    int target;

    cin >> count >> target;

    int numbers[count];

    for(int i = 0; i < count; i++){
        cin >> numbers[i];
    }

    for(int i = 0; i < count; i++){
        if(numbers[i] < target){
            cout << numbers[i] << ' '
        }
    }
    
}