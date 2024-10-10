//Diem can bang (Equilibrium index)
//cho mang mot chieu gom cac so nguyen, hay liet ke chi so i cua mang sao cho
//tong cac phan tu ben trai bang tong cac phan tu ben phai chi so i do
//neu khong ton tai chi so nao thi in ra -1
/*input: 2                           output:
         7
         -7 1 5 2 -4 3 0                    3 6
         4
         1 2 3 4                           -1*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        //nhap mang
        for(int i = 0; i < n; i++) cin >> a[i];
        //tinh tong phan tu trong mang va luu vao bien sum
        long long sum = 0;
        for(int i = 0; i < n; i++) sum += a[i];
        //duyet phan tu dau tien den phan tu cuoi cung cua mang
        //nen cho tong cac phan tu ben trai bang 0
        long long sum_left = 0;
        //khai bao bien de check xem co diem can bang hay khong
        //ban dau tien cho khong co
        bool oke = false;
        for(int i = 0; i < n; i++){
            sum -= a[i];//tong cac phan tu ben phai cua a[i]
            //neu tong cac phan tu ben phai bang tong cac phan tu ben trai
            //in ra diem can bang (chi so)
            //cho bien oke la co
            if(sum == sum_left){
                cout << i << " ";
                oke = true;
            }
            //sau do tang tong phan tu ben trai len a[i]
            sum_left += a[i];
        }
        //neu bien oke van la khong co thi in ra -1
        if(oke == false) cout << "\n-1";
    }
    return 0;
}