#include <iostream>

using namespace std;

int main()
{

    int zero[41];
    int one[41];

    zero[0] = 1;
    zero[1] = 0;

    one[0] = 0;
    one[1] = 1;

    for(int i = 2; i <=40; i++){
        zero[i] = zero[i-2] + zero[i-1];
        one[i] = one[i-2] + one[i-1];
    }

    int num;
    cin >> num;

    for(int j = 0; j < num ; j++){
        int get;
        cin >> get;
        cout<< zero[get] << ' ' << one[get] << '\n';
    }
}