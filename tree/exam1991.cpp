
#include <iostream>
#include <string>


using namespace std;

struct node{
    char value;
    node* left_child;
    node* right_child;
};

node tree[27];

void preFix(node x){
    cout << x.value;
    if(x.left_child != NULL){
        preFix(*x.left_child);
    }
    if(x.right_child != NULL){
        preFix(*x.right_child);
    }
}

void inOrder(node x){
    if(x.left_child != NULL){
        inOrder(*x.left_child);
    }
    cout << x.value;
    if(x.right_child != NULL){
        inOrder(*x.right_child);
    }
}

void postFix(node x){
    if(x.left_child != NULL){
        postFix(*x.left_child);
    }
    if(x.right_child != NULL){
        postFix(*x.right_child);
    }
    cout << x.value;
}


int main()
{
    int num;
    cin >> num;
    
    for(int i = 0; i <num; i++){
        char n,lc,rc;
        cin >> n >> lc >> rc;
        
        tree[n-'A'].value = n;
        
        if(lc != '.'){
            tree[n-'A'].left_child = &tree[lc-'A'];
        }
        if(rc != '.'){
            tree[n-'A'].right_child = &tree[rc-'A'];
        }
    }
    
    preFix(tree[0]);
    cout << '\n';
    inOrder(tree[0]);
    cout << '\n';
    postFix(tree[0]);
        
}
