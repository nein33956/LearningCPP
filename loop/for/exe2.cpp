//in ra cac so chia het cho 5 tu 1 toi 100
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i <= n; i += 5){
        if(i > 0) cout << i << endl; 
    }
    system("pause");
    return 0;
}