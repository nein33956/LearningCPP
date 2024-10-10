//prefix_sum:  pre[r] - (pre[l] - 1) nhanh hon pre[r] - pre[l] + 1
//do phuc tap O(1)
#include<iostream>
#include<windows.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n+1];
    for(int i = 1; i <= n; i++){
        cout << "a["<<i<<"]: ";
        cin >> a[i];
    }
    int prefix[n + 1] = {0};
    for(int i = 1; i <= n; i++){
        prefix[i] = prefix[i - 1] + a[i];
    }
    int t;
    cin >> t;
    while(t--){
        int l, r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] <<endl;
    }
    system("pause");
    return 0;
}