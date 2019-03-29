#include <iostream>

using namespace std;

int main(){

    int month;
    int day;

    cin >> month >> day;

    int days = 0;

    for(int i = 1; i < month; i++){
        days = days + 31;
    }
    if(month > 2){
        days = days - 3;
    }
    if(month > 4){
        days = days - 1;
    }
    if(month > 6){
        days = days - 1;
    }
    if(month > 9){
        days = days - 1;
    }
    if(month > 11){
        days = days - 1;
    }

    days = days + day;

    int what_day = days%7;

    switch(what_day){
        case 1:
            cout << "MON";
            break;
        case 2:
            cout << "TUE";
            break;
        case 3:
            cout << "WED";
            break;
        case 4:
            cout << "THU";
            break;
        case 5:
            cout << "FRI";
            break;
        case 6:
            cout << "SAT";
            break;
        case 0:
            cout << "SUN";
            break;
    
    }
}