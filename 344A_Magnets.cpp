#include<iostream>
using namespace std;;
int main(){
    int x;
    cin>>x;
    string magnet[x];
    int count=0;
    for(int i=0;i<x;i++){
        cin>>magnet[i];
       
    }
    for(int i=0;i<x;i++){
         if(magnet[i]!=magnet[i+1]){
            count+=1;
        }
    }
    cout<<count;
    return 0;
}