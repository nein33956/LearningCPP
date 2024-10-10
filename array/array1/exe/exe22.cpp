//Khoảng thời gian gõ giưa hai từ
/*nếu bạn gõ một từ ở giây thứ a và từ tiếp theo ở giây thứ b, thì nếu b - a <= c
thì từ đó sẽ xuất hiện trên màn hình ngược ại sẽ không xuất hiện
Ví dụ: 1 3 8 14 19 20 và c = 5
1 3 8 thỏa mãn c = 5 nên ở giây thứ 8 sẽ có 3 từ xuất hiện trên màn hình
sau đó đến giây thứ 14 không thỏa mãn c = 5 nên sẽ không còn từ nào xuất hiện trên màn hình
vad chỉ còn xuất hiện duy nhất từ mà bạn gõ ở giây 14, tương tự với 19 và 20 cũng thỏa mãn
nên cuối cùng có 3 từ xuất hiện trên màn hình*/
/*input: 6 5                         output:
         1 3 8 14 19 20                     3*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, time; cin >> n >> time;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        //khoi tao bien ans de luu so tu xuat hien tren man hinh
        //boi vi moc dau tien luon co tu duoc go nen ans = 1
        int ans = 1;
        //xet tu thoi diem thu 2 tro di
        for(int i = 1; i < n; i++){
            //neu thoi gian cua tu hien tai den tu dung truoc no nho hon time
            //thi se tang so tu xuat hien len neu khong thi reset no ve la 1
            if(a[i] - a[i-1] <= time) ++ans;
            else ans = 1;
        }
        cout << ans;
    }
    return 0;
}