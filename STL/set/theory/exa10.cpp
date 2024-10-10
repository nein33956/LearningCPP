//ham find()
#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> se = {3, 1, 2, 4, 4, 5, 6};
    for(auto i : se){
        cout << i <<" ";
    }
    cout<<endl;
    if(se.find(5) != se.end()){
        cout << "5 xuat hien trong set!\n";
    }else cout << "5 khong xuat hien trong set!\n";
    if(se.find(0) != se.end()){
        cout << "0 xuat hien trong set!\n";
    }else cout <<"0 khong xuat hien trong set!\n";
    system("pause");
    return 0;
}