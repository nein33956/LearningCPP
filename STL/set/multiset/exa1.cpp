//diem khac nhau cua set va multiset la ,ultiset co the luu gia tri giong nhau
//khai bao va nhap xuat
#include<bits/stdc++.h>
using namespace std;

int main(){
    multiset<int> ms;
    ms.insert(3);
    ms.insert(7);
    ms.insert(6);
    ms.insert(4);
    ms.insert(4);
    ms.insert(7);
    cout << ms.size() <<endl;
    for(auto i : ms){
        cout << i <<" ";
    }
    cout<<endl;
    system("pause");
    return 0;
}