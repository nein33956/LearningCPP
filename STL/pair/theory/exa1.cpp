/*pair nằm trong thư viện "utility" được sử dụng để kết hợp 2 kiểu dữ liệu với nhau,
  nó cung cấp cách lưu trữ 2 giá trị đi kèm nhau nhưng chỉ sử dụng 1 biến.
Nhìn chung pair giúp lưu trữ dữ liệu theo cặp và có những đặc điểm sau: 
    - Phần tử thứ nhất của pair được gọi là first, phần tử thứ 2 của pair được gọi là second
    - Bạn có thể so sánh, gán, copy pair như kiểu dữ liệu bạn thường gặp
    - Để truy cập vào phần tử thứ nhất và thứ 2 trong pair ta sử dụng toán tử dấu chấm */
/*Khai bao: 
    Cách 1 : Giá trị của first và second là mặc định
pair<first_data_type, second_data_type> pair_name;

    Cách 2 : Giá trị của first là value1, second là value2
pair<first_data_type, second_data_type> pair_name = make_pair(value1, value2);

    Cách 3 : Giá trị của first là value1, second là value2
pair<first_data_type, second_data_type> pair_name(value1, value2);

    Cách 4 : Giá trị của first là value1, second là value2
pair<first_data_type, second_data_type> pair_name = {value1, value2};  */
#include<iostream>
#include<utility>
#include<windows.h>

using namespace std;

int main(){
    pair<int, int> a = make_pair(18, 20);
    cout << a.first <<" "<< a.second <<endl;

    pair<char, int> b = {'@', 2004};
    cout << b.first <<" "<< b.second <<endl;

    pair<char, char> c('!', '?');
    cout << c.first <<" "<< c.second <<endl;

    pair<int, int> d;
    d.first = 1;
    d.second = 2;
    cout << d.first <<" "<< d.second <<endl;

    system("pause");
    return 0;
}