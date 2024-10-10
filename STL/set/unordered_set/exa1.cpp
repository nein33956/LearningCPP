//unordered_set rat toi uu trong viec tim kiem gia tri phan tu
//unordered_set sap xep phan tu theo chieu giam dan
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int> us;
    for(int i = 0; i < 10; i++){
        us.insert(i);
    }
    for(int i : us){
        cout << i <<" ";
    }
    cout<<endl;
    system("pause");
    return 0;
}