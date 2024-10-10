//liet ke k phan tu lon nhat, cac phan tu duoc dua ra theo thu tu giam dan
/*input: 2                             output: 
         5 3
         10 7 9 12 6                         12 10 9
         6 2
         9 7 12 8 6 5                        12 9 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int a[n];
        for(int &x : a){
            cin >> x;
        }
        //khoi tao set de luu cac phan tu giam dan
        set<int, greater<int>> se;
        //them cac phan tu vao set
        for(int i = 0; i < n; i++){
            se.insert(a[i]);
        }
        //sap xep giam dan nen phan tu dau tien la lon nhat
        //nen ta cho tro den phan tu dau tien
        auto x = ms.begin();
        //duyet k phan tu
        for(int i = 0; i < k; i++){
            //in ra phan tu dau tien
            cout << *x <<" ";
            //di chuyen con tro den vi tri tiep theo
            x++;
        }
        cout << endl;
    }
}