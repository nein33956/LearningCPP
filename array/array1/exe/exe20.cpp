//loai bo so khac nhau giu lai so giong nhau trong mang
//loai bo cac so ngoai cung ben trai hoac ngoai cung ben phai
//dem xem loai bao nhieu so de con lai cac so giong nhau
/*input: 2                     output:
         4
         1 2 3 4                      3
         5 
         1 2 2 1 2                    3*/
//idea: tim day con lien tuc co do dai dai nhat, sau do lay so luong phan tu cua mang tru di do dai day con
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        //khoi tao bien res de luu do dai day con co cac phan tu giong nhau dai nhat
        //ban dau khoi tao bang 1 vi day con co it nhat mot phan tu
        //khoi tao bien dem de dem so luong phan tu lien tiep giong nhau
        int res = 1, dem = 1;
        for(int i = 1; i < n; i++){
            if(a[i] == a[i-1]){
                ++dem;
            }else dem = 1;
            res = max(res, dem);
        }
        cout << n - res <<endl;
    }
    return 0;
}