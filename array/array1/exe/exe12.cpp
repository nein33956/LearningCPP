//dem so phan tu lap lai trong mang
//cho mang a[n], hay dem so phan tu bi lap lai it nhat mot lan
//vidu: a[] = {5, 6, 1, 2, 1, 4} thi ta co dap an la 2 vi phan tu 1 lap lai 2 lan
/*input: 2                                output:
         5
         4 5 1 2 1                              2
         6
         10 20 30 30 20 5                       4*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        //khoi tao map de luu value tu key
        map<int, int> mp;
        //nhap vao cac phan tu (key) va tang so lan xuat hien cua chung(value)
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        //khoi tao ans la bien dem phan tu bi lap lai
        int ans = 0;
        //duyet cac phan tu
        //neu phan tu nao co so lan xuat hien lon hon 2 thi tang bien dem len va in ra
        for(int i = 0; i < n; i++){
            if(mp[a[i]] >= 2) ++ans;
        }
        cout << ans <<endl;
    }
    return 0;
}