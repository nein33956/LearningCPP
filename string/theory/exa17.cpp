//tach tu trong xau theo nhieu ki tu khac nhau
//tach tu trong xau neu co mot ki tu dac biet
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "vo?le..thanh!hehe_vkl";
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '?' || s[i] == '!' || s[i] == '.' || s[i] == '_'){
            s[i] = ' ';
        }
    }
    stringstream ss(s);
    string word;
    while(ss >> word){
        cout << word <<endl;
    }
    return 0;
}