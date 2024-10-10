//tim so nguyen duong nho nhat chua xuat hien trong mang
//cho mảng a[] gồm n số nguyên dương bao gồm cả số 0, nhiệm vụ của bạn là tìm
//số nguyên dương nhỏ nhất không có mặt trong mảng
//ví dụ A[] = {5, 8, 3, 7, 9, 1} in ra 2
/*input: 2                output:
         5
         1 2 3 4 5              6
         5
         0 -10 1 3 -20          2 */

#include<bits/stdc++.h>

using namespace std;

//tao mot mang co 10^6 + 1 phan tu de luu so lan xuat hien cac phan tu
int cnt[1000002];
int main(){
    int t; cin >> t;//nhap so testcase
    while(t--){
        int n; cin >> n;//nhap so luong phan tu
        memset(cnt, 0, sizeof(cnt));//khoi tao mang cnt voi gia tri 0
        for(int i = 0; i < n; i++){
            int x; cin >> x; //nhap cac phan tu
            if(x > 0) cnt[x] = 1;//danh dau x da xuat hien
        }
        //duyet cac chi so cua mang cnt
        for(int i = 1; i <= n + 1; i++){
            if(cnt[i] == 0){ //duyet cac phan tu neu phan tu nao chua duoc danh dau thi in ra
                cout << i << endl;;
                break;
            }
        }
    }
    return 0;
}