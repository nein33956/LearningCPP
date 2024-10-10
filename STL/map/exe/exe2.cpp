//đếm số lần xuất hiện của các phần tử trong mảng, 
//in ra theo thứ tự nhập vào và số lần xuất hiện của chúng
/*input: 8                         output:
        1 2 1 1 3 5 1 4                  1 4
                                         2 1
                                         3 1
                                         5 1
                                         4 1*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int, int> mp; //khai bao map de luu value tu key la phan tu cua mang
    int n;
    cin >> n; //nhap so phan tu
    int a[1000]; //khai bao mang de luu cac phan tu
    for(int i = 0; i < n; i++){
        cin >> a[i]; //nhap mang
        //tang value(tan suat) cua phan tu cua key(gia tri phan tu cua mang)
        mp[a[i]]++;
    }
    for(int i = 0; i < n; i++){
        if( mp[a[i]] != 0){ //neu tan suat xuat hien cua phan tu khac 0 thi in ra
            cout << a[i] <<" "<< mp[a[i]] <<endl;
            mp[a[i]] = 0; //roi cho value cua phan tu do bang 0 de tranh in lai lan nua
        }
    }
    system("pause");
    return 0;
}