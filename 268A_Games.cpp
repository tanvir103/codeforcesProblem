#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int h[x],v[x];
    int count=0;
    for(int i=0;i<x;i++){
        cin>>h[i];
        cin>>v[i];
        for(int j=0;j<i;j++){
            if(h[i]==v[j]){
                count++;
            }
            if(v[i]==h[j]){
                count++;
            }
        }  
    }
    cout<<count;
    return 0; 
}

    
