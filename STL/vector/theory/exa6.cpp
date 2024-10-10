//khoi tao vector voi tat ca cac phan tu bang 1 so
#include<iostream>
#include<vector>
#include<windows.h>

using namespace std;
int main(){
    int n;
    cout <<"Nhap so luong phan tu: ";
    cin >> n;
    vector<int> v(n, 10); 
    //khai bao vector co n phan tu va tat ca cac phan tu deu bang 10
    for(int i = 0; i < v.size(); i++){
        cout << v[i] <<" ";
    }
    system("Pause");
    return 0;
}