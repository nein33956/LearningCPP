//day con co tong trung binh lon nhat(day con co tong lon nhat)
//slidingwindows, in ra day con co tong lon nhat
/*input: 2                            output:
         5 2
         10 4 5 15 20                       15 20
         4 2
         -12 34 56 7                        34 56*/

#include<bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        //khoi tao bien sum de luu tong do dai day con
        int sum = 0;
        for(int i = 0; i < k; i++){
            sum += a[i];
        }
        //khoi tao bien res de luu tong lon nhat(ki luc) ban dau bang sum
        //khoi tao bien idx de luu chi so bat dau cua day con co tong lon nhat
        int res = sum, idx = 0;
        //duyet vong lap tim day con co tong lon nhat
        for(int i = k; i < n; i++){
            sum = sum - a[i-k] + a[i];
            if(sum > res){
                res = sum;
                idx = i-k+1;
            }
        }//in ra day con co tong lon nhat
        for(int i = 0; i < k; i++){
            cout << a[idx + i] <<" ";
        }
        cout << endl;
    }
    return 0;
}