//nhap xuat mang bang vector
//khai baovector rong va them phan tu duoc nhap vao ban phim vao cuoi vector
#include<iostream>
#include<vector>
#include<windows.h>

using namespace std;

int main(){
    vector<int> v; //khai bao vector v la vector rong
    int n; //khai bao bien de nhap so luong phan tu
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    int tmp; //khoi tao bien tmp de nhap phan tu sau
    for(int i = 0; i < n; i++){
        cin >> tmp;
        v.push_back(tmp); //them phan tu vua nhap vao sau vector
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i] <<" "; //in ra vector
    }
    system("pause");
    return 0;
}