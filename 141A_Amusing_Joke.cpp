#include<bits/stdc++.h>
using namespace std;
int main(){
    string m,n,k;
    cin>>m>>n>>k;
    string a=m+n;
    sort(a.begin(),a.end());
    sort(k.begin(),k.end());
    bool flag=false;
    for(int i=0;i<=a.length();i++){
        if(k[i]==a[i]){
            flag=true;
        }else{
            flag=false;
            break;
        }
    }
    if(flag==true){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}