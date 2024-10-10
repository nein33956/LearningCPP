// Liệt kê các phần tử có tổng bằng k
// #include<iostream>
// using namespace std;

// int main(){
//     int n, k; cin >> n >> k;
//     int a[n];
//     for(int i = 0; i < n; i++)
//         cin >> a[i];
//     for(int i = 0; i < n; i++){
//         for(int j = i + 1; j < n; j++){
//             if(a[i] + a[j] == k)
//                 cout << a[i] <<" "<< a[j] <<endl;
//         }
//     }
//     system("pause");
//     return 0;
// }
// Kĩ thuật 2 con trỏ
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int left = 0, right = n - 1;
    while(left < right){
        int sum = a[left] + a[right];
        if(sum == k){
            cout << a[left] << " " << a[right] << endl;
            left++;
            right--;
        }else if(sum < k) left++;
        else right--;
    }
    system("pause");
    return 0;
}

