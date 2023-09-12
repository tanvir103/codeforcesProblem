#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    string a;
    cin>>a;
    int length=a.length();
    for(int i=0;i<length;i++){
        if(a[i]=='+'){
            a[i]=' ';
        }
    }
    sort(a.begin(), a.end());
    for(int i=0;i<a.length();i++){
        if(a[i]==' '){
            continue;
        }else{
            cout<<a[i];
        }
    if(i<a.length()-1){
        cout<<"+";
    }
   }
}