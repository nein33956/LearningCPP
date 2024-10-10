//tang mang de phan tu dung sau lon hon hoac bang phan tu dung truoc
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        //khoi tao bien ans de luu tong cac so can cong
        long long ans = 0;
        //duyet mang tu vi tri thu nhat vi vi tri dau tien khong co phan tu nao dung truoc
        for(int i = 0; i < n; i++){
            if(a[i] < a[i-1]){
                ans += a[i-1] - a[i];
                a[i] = a[i-1];
            }
        }
        cout << ans;
    }
    return 0;
}