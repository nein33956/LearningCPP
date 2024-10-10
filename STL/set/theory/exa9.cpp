//ham clear()
#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s = {1, 2, 3, 4, 5, 6};
    cout << s.size() <<endl;
    for(auto i : s){
        cout << i <<" ";
    }
    cout<<endl;
    s.clear(); //xoa toan bo phan tu
    cout << s.size() <<endl;
    system("pause");
    return 0;
}