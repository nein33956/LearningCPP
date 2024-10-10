//cho 2 mảng số nguyên, hãy liet ke những phần tử thuộc mảng thứ nhất mà không thuộc mảng thứ 2
//nếu không tồn tại số nào thì in ra NOT FOUND
//+ Dòng đầu tiên là số lượng testcase
//Mỗi test gồm nhiều dòng:
//+ Dòng thứ nhất là số phần tử của mảng thứ nhất và mảng thứ 2
//+ Dòng thứ 2 gồm các phần tử thuộc mảng thứ nhất
//+ Dòng thứ 3 gồm các phần tử thuộc mảng thứ hai
//y tuong: luu man b vao set sau do duyet mang a, tim kiem trong mang b xem cac phan tu co xuat hien hay khong
/*input: 1              output:
         4 5
         1 2 2 9
         2 0 9 8 3            1*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t; //nhập số bộ test
    while(t--){
        int m, n; cin >> m >> n; //nhập vào số lượng phần tử của 2 dãy
        int a[m], b[n]; //khai báo mảng a có m phần tử, mang b co n phần tử
        //nhập các phần tử của mảng a
        for(int &i : a){
            cin >> i;
        } 
        set<int> se; //khai báo set để lưu mảng b
        //duyệt + nhập các phần tử vào mảng b và lưu vào set
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            se.insert(x);
        }
        bool oke = false;//khởi tạo biến oke để check xem phần tử có xuất hiện hay không
        //duyệt các phần tử của mảng a
        for(int i : a){
            //tìm xem trong mảng b(set) có các phần tử i của mảng a hay không
            //nếu trong dãy b không tồn tại phần tử i đó thì in ra
            if(se.find(i) == se.end()){
                cout << i <<" ";
                //chuyển biến oke thành true để báo tìm thấy
                oke = true; //tim thay
            }
        }
        //nếu không tìm thấy phần tử nào thì in ra không tìm thấy
        if(oke == false) cout << "NOT FOUND!\n";
        else cout << endl;
    }
    system("pause");
    return 0;
}

