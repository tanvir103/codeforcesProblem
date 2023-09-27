#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    
    for(int i=0;i<x;i++){
        int a,b;
        cin>>a;
        cin>>b;
        if(a%b!=0){
            int m=a%b;
            cout<<b-m<<endl;
        }else{
                cout<<0<<endl;
        }
    } 
    
}