//khai bao va duyet set
#include<iostream>
#include<set>
#include<windows.h>

using namespace std;

int main(){
    set<int> s;
    for(int i = 0; i < 10; i++){
        s.insert(i);
    }
    for(auto i : s){
        cout << i <<" ";
    }
    cout <<endl;
    system("pause");
    return 0;
}