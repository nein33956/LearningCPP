//cho mảng số nguyên gồm n phần tử, với mỗi truy vấn hay kiểm tra 
//số đó có nằm trong mảng không
//- Dòng đầu tiên là số lượng testcase
//- Mỗi test gồm nhiều dòng
// + Dòng đầu tiên là số phần tử của mảng
// + Dòng thứ 2 bao gồm các phần tử của mảng
// + Dòng thứ 3 là số truy vấn
// + Mỗi truy vẫn là một số cần kiểm tra
/*input: 1                     output:
         6
         1 2 3 8 7 0
         4
         1                           YES
         2                           YES
         10                          NO
         20                          NO*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t; //Nhap vao so bo test
    while(t--){
        int n; cin >> n; //Nhap vao so phan tu cua day
        set<int> se; //Khai bao set de luu phan tu cua day
        for(int i = 0; i < n; i++){
            int x; cin >> x; //Nhap vao cac phan tu
            se.insert(x); //Luu cac phan tu vao trong set
        }
        int q; cin >> q; //Nhap so truy van
        while(q--){
            int a; cin >> a; //Nhap phan tu can truy van
            if(se.count(a) == 1){ //Neu phan tu do co xuat hien thi in ra YES
                cout << "YES" <<endl;
            }else cout << "NO" <<endl;
        }
    }
    system("pause");
    return 0;
}