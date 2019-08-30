#include <iostream>
#include <string>
#include <deque>

using namespace std;

int num;
deque<int> deq;


int main()
{
    cin >> num;
    
    string str;
    int n;
    for(int i = 0; i < num; i++){
        cin >> str;
        
        if(str == "push_back" || str == "push_front"){
            cin >> n;
        }
        
        if(str == "push_back"){
            deq.push_back(n);
        }
        else if( str == "push_front"){
            deq.push_front(n);
        }
        
        else if( str == "pop_front"){
            if( deq.size() > 0 ){
                cout << deq.front() << '\n';
                deq.pop_front();
            }else{
                cout << -1 << '\n';
            }
        }
        else if( str == "pop_back"){
            if( deq.size() > 0 ){
                cout << deq.back() << '\n';
                deq.pop_back();
            }else{
                cout << -1 << '\n';
            }
        }
        else if( str == "size"){
            cout << deq.size() << '\n';
        }
        else if( str == "empty"){
            if( deq.empty()){
                cout << 1 << '\n';
            }else{
                cout << 0 << '\n';
            }
        }else if( str == "front"){
            if( deq.size() > 0 ){
                cout << deq.front() << '\n';
            }else{
                cout << -1 << '\n';
            }
        }
        else if( str == "back"){
            if( deq.size() > 0 ){
                cout << deq.back() << '\n';
            }else{
                cout << -1 << '\n';
            }
        }
    }
}
