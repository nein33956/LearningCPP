#include<bits/stdc++.h>
using namespace std;

int secondLargest(int a[], int size){
    if(size < 2) return INT_MIN;
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for(int i = 0; i < size; i++){
        if(a[i] > max1){
            max2 = max1;
            max1 = a[i];
        }else if(a[i] > max2 && a[i] != max1)  max2 = a[i]; 
    }
    return max2;
}

int main(){
    int n; cin >> n; 
    int a[n];
    for(int i = 0; i < n; i ++) cin >> a[i];
    int size = sizeof(a) / sizeof(a[0]);
    int result = secondLargest(a, size);
    if(result != INT_MIN) cout << result << endl;
    else cout << "Không tìm thấy số lớn thứ hai trong mảng." << endl;
    system("pause");
    return 0;
}
// Chúng ta sẽ duyệt qua tất cả các phần tử trong mảng để tìm ra số lớn nhất (max1) và số lớn thứ hai (max2).
// Nếu tìm được một số lớn hơn max1, thì số lớn thứ hai sẽ trở thành max1 trước đó, và max1 sẽ được cập nhật thành số mới.
// Nếu tìm được một số nhỏ hơn max1 nhưng lớn hơn max2, thì cập nhật max2 thành số đó.