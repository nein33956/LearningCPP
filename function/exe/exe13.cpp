//dem so luong uoc so cua mot so nguyen
#include<bits/stdc++.h>
using namespace std;

// cách bình thường
// int count(int n){
//     int cnt = 0;
//     for(int i = 1; i <= n; i++){
//         if(n % i == 0){
//             ++cnt;
//         }
//     }
//     return cnt;
// }

int count(int n){
    int cnt = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            if(i != n/i) cnt += 2;
            else ++cnt;
        }
    }
    return cnt;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << count(n) <<endl;
    }
    system("pause");
    return 0;
}