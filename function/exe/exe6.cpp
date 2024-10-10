//tim max min 3 so
#include<bits/stdc++.h>
using namespace std;

int max_number(int a, int b, int c){
    int max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    return max;
}

int min_number(int a, int b, int c){
    int min = c;
    if(b < min) min = c;
    if(a < min) min = a;
    return min;
}

int main(){
    long long x, y, z;
    cin >> x >> y >> z;
    cout << "Max = " << max_number(x, y, z) <<endl;
    cout << "Min = " << min_number(x, y, z) <<endl;
    system("pause");
    return 0;
}