//ham cout()
#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s = {1, 2, 3, 4, 8, 9, 6};
    if(s.count(5) != 0){
        cout << "Yes!\n";
    }else cout << "No!\n";
    if(s.count(9) != 0){
        cout << "Yes!\n";
    }else cout << "No!\n";
    system("pause");
    return 0;
}