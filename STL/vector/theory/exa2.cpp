//cac ham thong dung trong vector
//- namevector.push_back(name_of_element); : them mot phan tu vao cuoi vector
//- namevector.pop_back(); : bo di phan tu cuoi cung cua vector
//- namevector.size(); : tra ve kich thuoc cua vector
//- nameofvector.clear(); : bo di tat ca cac phan tu cua vector
//- nameofvector.front(); : lay ra phan tu dau tien cua vector
//- nameofvector.back(); : lay ra phan tu cuoi cung cua vector
//- nameofvector.at(n); : lay ra phan tu thu n cua vector tinh tu 0
//- nameofvector.resize(); : thay doi kich thuoc cua vector
#include<iostream>
#include<vector>
#include<windows.h>

using namespace std;

int main(){
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    cout << "Kich thuoc cua vector la: " << a.size() <<endl;
    cout << "Phan tu dau tien cua vector la: " << a.front() <<endl;
    cout << "Phan tu dau tien cua vector la: " << a[0] <<endl;
    cout << "Phan tu cuoi cung cua vector la: " << a.back() <<endl;
    cout << "Duyet vector: ";
    for(int i = 0; i < a.size(); i++){
        cout << a[i] <<" ";
    }
    cout <<endl;
    a.clear();
    cout << "Kich thuoc cua vector luc sau la: " << a.size() <<endl;
    system("pause");
    return 0;
}