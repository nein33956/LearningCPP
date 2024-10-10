//prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1] + a[i][j]
// kq = prefix[A][B] - prefix[a-1][B] - prefix[A][b-1] + prefix[a-1][b-1]
//do phuc tap O(1)
#include<iostream>
#include<windows.h>

using namespace std;

int main(){
    int m, n;
    cout << "Nhap so hang va so cot: ";
    cin >> m >> n;
    int a[m+1][n+1];
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            cout << "a["<<i<<"]["<<j<<"]: ";
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            cout << a[i][j] <<" ";
        }
        cout <<endl;
    }
    int prefix[m+1][n+1] = {0};
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1] + a[i][j];
        }
    }
    int t; 
    cin >> t;
    while(t--){
        int a, A, b, B;
        cin >> a >> A >> b >> B;
        cout << prefix[A][B] - prefix[a-1][B] - prefix[A][b-1] + prefix[a-1][b-1] <<endl;;
    }
    system("pause");
    return 0;
} 