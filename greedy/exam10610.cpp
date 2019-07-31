#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
  char arr[100000];
  cin >> arr;
    int len = strlen(arr);
    
    int sum = 0;
    bool haveZero = false;
    
    for(int i = 0; i < len ; i++){
        if(arr[i] == '0'){
            haveZero = true;
        }
        else{
            sum += (int)(char)arr[i];
        }   
    }
    if(!haveZero){
        cout << -1;
    }else{
        if( sum%3 == 0){
            sort(arr, arr+len);
            for(int i = len-1; i >= 0; i--){
                cout << arr[i];
            }
        }
        else{
            cout << -1;
        }
    }
}
