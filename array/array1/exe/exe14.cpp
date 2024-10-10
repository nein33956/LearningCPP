//day cac so fibo trong mang
/*input: 2                           output:
         7
         1 4 3 9 10 13 7                   1 3 13
         9
         0 2 8 5 2 1 4 13 22               0 2 8 5 2 1 13*/

#include<bits/stdc++.h>

using namespace std;
//khoi tao mang de luu so fibonaci
int f[1001];
void khoi_tao(){
    //khoi tao mang fibo de luu chi so so fibonaci
    int fibo[20];
    //gan gia tri ban dau cho day fibo
    fibo[0] = 0; 
    fibo[1] = 1;
    //duyet vong lap va tinh toan cac gia tri tiep theo cua day fibo
    for(int i = 2; i <= 19; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }

    //danh dau cac so fibo trong mang
    for(int i = 0; fibo[i] <= 1000; i++){
        f[fibo[i]] = 1;
    }
}

int main(){
    khoi_tao();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        //in ra cac phan tu cua mang ma co gia tri la so fibo
        for(int i = 0; i < n; i++){
            if(f[a[i]]) cout << a[i] <<" ";
        }
        cout << endl;
    }
    return 0;
}