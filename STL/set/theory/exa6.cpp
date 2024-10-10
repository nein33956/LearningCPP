// ham insert()
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    s.insert(10);
    s.insert(10);
    s.insert(7);
    s.insert(3);
    s.insert(-1);
    cout << s.size() <<endl;
    for(auto i : s){
        cout << i <<" ";
    }
    cout<<endl;
    system("pause");
    return 0;
}