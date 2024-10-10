//ham size()
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<char> s;
    s.insert('N');
    s.insert('e');
    s.insert('i');
    s.insert('n');
    s.insert('N');
    cout << s.size() <<endl;
    for(auto i : s)
        cout << i;
    cout<<endl;
    system("pause");
    return 0;
}