//tìm số xuất hiện nhiều nhất trong mảng và in ra số lần xuất hiện
//trong trường hợp có nhiều số có cùng số lần xuất hiện thì in ra số nhỏ nhất
// + Dòng đầu tiên là số bộ test
// Mỗi test gồm nhiều dòng
//- Dòng đầu tiên là số phần tử của mảng
//- Dòng thứ 2 là các phần tử của mảng
/*input: 1                         output: 
         10
         1 1 2 2 2 1 4 7 8 3 9            1 3*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t; //nhập số bộ test
    while(t--){
        int n; cin >> n; //nhập số phần tử của mảng
        map<int, int> mp; //khai báo map để dùng key(phần tử) và value(tần suất)
        for(int i = 0; i < n; i++){
            int x; cin >> x; //nhập vào các phần tử
            mp[x]++; // tăng tần xuất(vlue) của phần tử(key) vừa nhập
        }
        int max_fe = 0; //khởi tạo biến để lưu tần xuất lớn nhất
        int res;//khởi tạo biến để lưu phần tử có tần xuất xuất hiện lớn nhất
        for(auto i : mp){
            //nếu tần xuất(value = second) lớn hơn kỉ lục 
            if(i.second > max_fe){ 
                //thì cập nhật kỉ lục bằng tần xuất(value = second)
                max_fe = i.second;
                //và phần tử(key) có tần xuất(value) xuất hiện lớn nhất đó là first = key
                res = i.first;
            }
        }
        //in ra phần tử(key) và tần xuất(value)
        cout << res <<" "<< max_fe <<endl;
    }
    system("pause");
    return 0;
}