#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    string name;
    cin>>name;
    int length=name.length();
    int count=0;
    sort(name.begin(),name.end());
    for(int i=1;i<length;i++){
        if(name[i]!=name[i-1]){
            count++;
        }
    }
    if(count%2==0){
        cout<<"IGNORE HIM!";
    }else{
        cout<<"CHAT WITH HER!";
    }
}