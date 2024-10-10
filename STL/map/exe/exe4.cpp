//dòng đầu tiên là số lượng testcase
//mỗi testcase gồm 2 dòn, dòng đầu tiên là số phần tử của mảng
//dòng thứ 2 bao gồm n phần tử của mảng
//in ra số lượng phần tử khác nhau của mảng
/*input: 2                output:
         5
         1 2 2 2 1               2
         4
         1 2 3 4                 4*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int, bool> mp;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            mp[x] = true;
        }
        cout << mp.size() <<endl;
    }
    system("pause");
    return 0;
}
//ban chat dang nhap key ma trong map key khong trung nhau nen in ra size la so luong key