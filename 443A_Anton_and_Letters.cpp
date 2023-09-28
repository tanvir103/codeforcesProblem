#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    sort(s.begin(), s.end());
    int len=s.length();
    int count=0;
    for(int i=0;i<len;i++){
        if((s[i]==' ')||(s[i]==',')){
            continue;
        }else if((s[i]=='{')||(s[i]=='}')){
            continue;
        }else{
            if(s[i]!=s[i+1]){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}