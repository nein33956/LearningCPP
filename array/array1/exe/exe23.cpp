/*cho mảng A[] có n phần tử và số nguyên X, tìm dãy con có chiều dài nhỏ nhất
và có tổng lơn hơn X, nếu không có in ra -1
Ví dụ: a[] = {1, 4, 45, 6, 0, 19} và X = 51 ta có dãy con {4, 45, 6}
với dãy a[] = {1, 2, 4} và X = 8 thì in ra -1*/
/*input: 2                output:
         6 51
         1 4 45 6 0 19          3(4 45 6)
         3 8
         1 2 4                  -1*/
/*idea: - khởi tạo biến left để đánh dấu từ chỉ số đầu tiên,
        biến right để đánh dấu tại vị trí mà tổng sum > X
        - khởi tạo biến sum = 0 và duyệt từ chỉ số đầu tiên và cộng vào biến sum
        đến khi nào giá trị biến sum lớn hơn biến x thì dừng lại tại đó có biến right
        - khi đó các phần tử từ chỉ số left tới right có tổng lơn hơn X
        - cập nhật độ dài của dãy con đó là right - left + 1
        - bước tiếp theo là thu nhỏ dãy con để có độ dài nhỏ nhất
        - bằng cách lấy tổng trừ chỉ số ở biến left xem thử có lớn hơn X hay không, 
        nếu thỏa mãn thì dịch biến left sang phải rồi cập nhật độ dài dãy con,
        tiếp tục làm sau đó nếu không thỏa mãn thì giữ nguyên biến left ở đó
        - sau đó ta tiến hành dịch biến right sang phải...*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, X; cin >> n >> X;
        int a[n];
        for(int &i : a) cin >> i;
        int left = 0, res = 1e9;
        //khoi tao bien res de luu do dai day con
        long long sum = 0;
        for(int right = 0; right < n; right++){
            sum += a[right];
            while(sum > X){
                res = min(res, right - left + 1);
                sum -= a[left];
                ++left;
            }
        } 
        if(res == 1e9) cout << "-1\n";
        else cout << res <<endl;
    }
    return 0;
}
