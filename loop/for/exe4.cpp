//tinh tong binh phuong cac so tu 1 toi n
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i*i;
    }
    cout << sum << endl;
    system("pause");
    return 0;
}