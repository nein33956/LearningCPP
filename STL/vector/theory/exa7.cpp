//nhap xuat mang bang vector
//khai bao vector co san so luong phan tu duoc nhap tu ban phim
#include<iostream>
#include<vector>
#include<windows.h>

using namespace std;

int main(){
    int n; //khai bao n la so luong phan tu cua vector
    cout <<"Nhap so luong phan tu: ";
    cin >> n;
    vector<int> v(n); //khai bao vector v co n phan tu
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i] <<" ";
    }
    system("pause");
    return 0;
}