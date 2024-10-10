#include<bits/stdc++.h>
using namespace std;

int cnt_check(string s){
    int n = s.length();
    int count = 0;
    for(int mid = 0; mid < 2 * n - 1; mid++){
        int left = mid / 2;
        int right = left + mid % 2;
        while(left >= 0 && right < n && s[left] == s[right]){
            count++;
            left--;
            right++;
        }
    }
    return count;
}

int main(){
    int n; cin >> n;
    string s; cin >> s;
    int q; cin >> q;
    for(int i = 0; i < q; i++){
        int l, r; cin >> l >> r;
        string substring = s.substr(l - 1, r - l + 1);
        int result = cnt_check(substring);
        cout << result << endl;
    }
    return 0;
}