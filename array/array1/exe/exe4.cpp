//dem so thuan nghich co trong mang
#include<iostream>
using namespace std;

bool thuannghich(int n){
   int rev = 0, tmp = n;
    // khai bao bien rev de luu so thuan nghich
    // khai bao bien tmp = n de doi chieu voi bien rev
    while(n != 0){
      rev = rev * 10 + n % 10;
      n /= 10;
    }
    return rev == tmp;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    for(int i = 0; i < n; i++){
        if(thuannghich(a[i]))
            cout << a[i] <<" ";
    }
    return 0;
}