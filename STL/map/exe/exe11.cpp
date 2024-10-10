//Đặt tên người dùng: ví dụ như có danh sách các tên, 
//nếu tên người đó xuất hiện lần đầu thì in ra tên người đó,
//nếu tên người đó đã xuất hiện thì in thêm các chỉ số
/*input: 8                   output:
         an                         an
         binh                       binh
         an                         an1
         binh                       binh1
         thai                       thai
         thanh                      thanh
         ngoc                       ngoc
         thai                       thai1*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    //Nhập bộ test và xử lí trôi lệnh
    int t; cin >> t;
    getchar();
    //khai báo map để sử dụng key lưu tên và value để lưu lần xuát hiện
    map<string, int> mp;
    while(t--){
        //nhập tên
        string username;
        getline(cin, username);
        //nếu trong map không tìm thấy phần tử key nào giống nó thì in ra key là username
        if(mp.find(username) == mp.end()){
            cout << username <<endl;
            //nếu tìm thấy phần tử giống thì in username kèm theo lần xuất hiện
        }else cout << username << mp[username] <<endl;
        //nếu còn xuất hiện thì cứ nâng value lên là được
        mp[username]++;
    }
    return 0;
}