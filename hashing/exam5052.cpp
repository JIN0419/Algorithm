#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int tc; 
    cin >> tc;
    
    while(tc--){
        int n;
        cin >> n;
        
        vector<string> num(n);
        for(int i = 0; i < n; i++){
            cin >> num[i];
        }
        
        sort( num.begin(), num.end() );
        
        bool isHave = false;
        for(int i = 1; i < n; i++){
            if( num[i-1] == num[i].substr(0, num[i-1].size()) ){
                isHave = true;
                break;
            }
        }
        
        if( isHave ){
            cout << "NO" << '\n';
        }else{
            cout << "YES" << '\n';
        }
    }
}
