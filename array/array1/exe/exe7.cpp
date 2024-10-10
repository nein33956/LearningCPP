// Cho mảng A[] gồm n phần tử, hãy sắp xếp lại các phần tử của mảng sao cho A[i] = i
// Nếu phần tử A[j] có giá trị khác j, hãy đưa vào -1
// Ví dụ A[] = -1 -1 6 1 9  3 2 -1  4 -1  
//  =>   A[] = -1  1 2 3 4 -1 6 -1 -1  9
// Chỉ số nào không xuất hiện thì in ra -1
/*input: 2                          output:
         10
        -1 -1 6 1 9 3 2 -1 4 -1            -1 1  2 3  4 -1 6 -1 -1 9

         6
         0 -3 1 -2 3 -4                     0 1 -1 3 -1 -1           */

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;   
    while(t--){
        int n; cin >> n;
        // Tạo map để đánh dấu phần tử có xuất hiện hay không
        // Duyệt phần tử bằng key và kiểm tra có xuất hiện hay không bằng value
        map<ll, bool> mp; 
        for(int i = 0; i < n; i++){
            ll x;  cin >> x; 
            mp[x] = true;          // Đánh dấu các phần tử vừa nhập đều xuất hiện
        }
        // Duyệt các chỉ số xem số nào ứng với chỉ số xuất hiện thì in ra
        for(int i = 0; i < n; i++){
            if(mp[i]) cout << i <<" ";
            else cout << "-1 ";
        }
        cout <<endl;
    }
    system("pause");
    return 0;
}