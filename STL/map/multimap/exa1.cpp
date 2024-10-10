//các key trong multimap có thể trùng nhau và được sắp xếp theo thứ tự tăng dần
//các hàm trong multimap cũng tương tự như map
//trong multimap không thể khởi tạo bằng cách gán giá trị mà phải dùng hàm insert()

#include<bits/stdc++.h>
using namespace std;
int main(){
    multimap<int, int> mp;
    mp.insert({100, 200});
    mp.insert({100, 600});\
    mp.insert({300, 0});
    mp.insert({200, 300});
    mp.insert({100, 400});
    mp.insert({200, 0});
    for(auto i : mp){
        cout << i.first <<" "<< i.second <<endl;
    }
    system("pause");
    return 0;
}