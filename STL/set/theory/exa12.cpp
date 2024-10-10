//ham erase()
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s = {1, 2, 3, 4, 5};
    s.erase(5);
    for(auto i : s){
        cout << i <<" ";
    }
    cout<<endl;
    system("pause");
    return 0;
}