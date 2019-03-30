#include <iostream>

using namespace std;

int main(){
    int count;

    cin >> count;
        
    int score[count];
    int max = 0;
    for(int i =0; i < count; i++){
        cin >> score[i];
        if( score[i] > max){
            max = score[i];
        }
    }

    double ave = 0;

    for(int i = 0; i <count; i++){
        ave = ave + (double)score[i]/max*100;

    }

    cout << ave/count;

}