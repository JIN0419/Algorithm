#include <iostream>


using namespace std;

int main(){
    cin.tie(NULL);
	ios::sync_with_stdio(false);
    
    int num;
    cin >> num;

    int sum[num];

    for(int i = 0; i < num ; i++){
        int a;
        int b;
        cin >> a >> b;
        sum[i] = a+b;
    }
    for(int i = 0; i <num; i ++){
        cout << sum[i] <<'\n';
    }
}