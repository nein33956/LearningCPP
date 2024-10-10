//in ra so co so lan xuat hien le
/*input: 2                    output:
         7 
         1 2 3 2 3 1 3              3
         5
         1 1 3 3 2                  2*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        map<int, int> mp;
        int n; cin >> n;
        int a[n];
        //duyệt vòng lặp từ chỉ số phần tử đầu tiên đến cuối cùng
        //nhập vào các phần tử của mảng 
        //tăng tần xuất xuất hiện của các phần tử vừa nhập (value)
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++; 
        }
        //duyet vòng lặp và xem phần tử nào có tần xuất xuất hiện lẻ thì in ra
        //sau đó đặt lại tần xuất bằng 0 để tránh in lại lần sau
        for(int i = 0; i < n; i++){
            if(mp[a[i]] % 2 != 0){
                cout << a[i] <<" ";
                mp[a[i]] = 0;
            }
        }
        cout <<endl;
    }
    return 0;
}