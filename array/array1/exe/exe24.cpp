// trung vi cua mang la phan tu dung giua cua mang da duoc sap xep neu so luong phan tu cua mang la so le,
//va la phan tu nho hon giua hai phan tu dung giua neu mang la so chan
/*input: 2                   output:
         5
         1 2 4 5 3                 3
         6
         7 8 10 9 5 6              7*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        sort(a, a+n);
        if(n % 2 != 0){
            cout << a[n/2] <<endl;
        }else cout << a[n/2 -1] <<endl;
    }
    return 0;
}