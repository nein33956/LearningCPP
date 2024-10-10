//in ra uoc chung lon nhat cua hai so bat ki trong day
/*input: 1                        output:
         10
         2 3 1 4 5 7 14 3 5 15           7*/

#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        //khoi tao bien res de luu uoc chung lon nhat
        int res = 1;
        //duyet cac cap phan tu
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                res = max(res, gcd(a[i], a[j]));
            }
        }
        cout << res;
    }
    return 0;
}