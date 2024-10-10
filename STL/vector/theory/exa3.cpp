//duyet cac phan tu
#include<iostream>
#include<vector>
#include<windows.h>

using namespace std;

int main(){
    vector<int> n;
    n.push_back(10);
    n.push_back(20);
    n.push_back(30);
    for(auto it = n.begin(); it != n.end(); it++){
        cout << *it <<endl;
    }
    system("pause");
    return 0;
}