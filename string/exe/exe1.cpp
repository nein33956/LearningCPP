//Đếm số lượng từ trong xâu ký tự, giữa các từ có thể có nhiều dấu cách
//  Created by Nguyen Quoc Viet on 20/09/2021.
//
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//
//                _ooOoo_                       NAM MÔ A DI ĐÀ PHẬT !
//               o8888888o
//               88" . "88      Thí chủ con tên là Nguyễn Quốc Việt, dương lịch ba mươi tháng tám năm 1998
//               (| -_- |)      Ngụ tại số nhà 23B/17 Nguyễn Văn Trỗi, Mộ Lao, Hà Nội, Việt Nam
//                O\ = /O
//            ____/`---'\____         Con lạy chín phương trời, con lạy mười phương đất
//            .' \\| |// `.             Chư Phật mười phương, mười phương chư Phật
//           / \\||| : |||// \        Con ơn nhờ Trời đất chổ che, Thánh Thần cứu độ
//         / _||||| -:- |||||- \    Xin nhất tâm kính lễ Hoàng thiên Hậu thổ, Tiên Phật Thánh Thần
//           | | \\\ - /// | |              Giúp đỡ con code sạch ít bug
//         | \_| ''\---/'' | |           Đồng nghiệp vui vẻ, sếp quý tăng lương
//         \ .-\__ `-` ___/-. /          Sức khoẻ dồi dào, tiền vào như nước
//       ___`. .' /--.--\ `. . __
//    ."" '< `.___\_<|>_/___.' >'"". NAM MÔ VIÊN THÔNG GIÁO CHỦ ĐẠI TỪ ĐẠI BI TẦM THANH CỨU KHỔ CỨU NẠN
//   | | : `- \`.;`\ _ /`;.`/ - ` : | |  QUẢNG ĐẠI LINH CẢM QUÁN THẾ ÂM BỒ TÁT
//     \ \ `-. \_ __\ /__ _/ .-` / /
//======`-.____`-.___\_____/___.-`____.-'======
//                `=---='
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; getline(cin, s);
    stringstream ss(s);
    int cnt = 0;
    string word;
    while(ss >> word){
        ++cnt;
    }
    cout << cnt;
    system("pause");
    return 0;
}