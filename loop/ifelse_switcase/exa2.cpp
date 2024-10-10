//viet chuong trinh tim max_min 3 so
#include<bits/stdc++.h>
using namespace std;

int max(int a, int b, int c){
    int max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    if(a == b == c) cout << "Bang nhau!" <<endl;
    return max;
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << max(a, b, c) << endl;;
    system("pause");
    return 0;
}