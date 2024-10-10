//tim hang co tong lon nhat
#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n; cin >> m >> n;
    int a[500][500];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    //khoi tao bien ans de luu ki luc la tong lon nhat
    long long ans = -1e18;
    //su dung vector de luu cac hang co tong lon nhat
    vector<int> row;
    for(int i = 0; i < m; i++){
        //khoi tao bien sum de luu tong cua tung hang
        long long sum = 0;
        for(int j = 0; j < n; j++)
            sum += a[i][j];
        //xoa het cac phan tu chi giu lai hang co tong lon nhat
        if(sum > ans){
            ans = sum;
            row.clear();
            row.push_back(i);
            //neu co nhieu hang co cung ki luc thi van giu lai
        }else if(sum == ans) row.push_back(i);
    }
    cout << ans << endl;
    //in ra so hang
    for(int x : row)
        cout << x + 1 <<" ";
    cout <<endl;
    return 0;
}