//tim gia tri lon nhat va nho nhat trong mang
#include<bits/stdc++.h>
using namespace std;

int max(int a[], int n){
    int max = a[0];
    int max_idx = 0;
    for(int i = 1; i < n; i++){
        if(a[i] > max){
            max = a[i];
            max_idx = i;
        }
    }
    cout << max << " " << max_idx <<endl;
}

int min(int a[], int n){
    int min = a[0];
    int min_idx = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < min){
            min = a[i];
            min_idx = i;
        }
    }
    cout << min << " " << min_idx << endl;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cout <<"\n";
    max(a, n);
    min(a, n);
    system("pause");
    return 0;
}