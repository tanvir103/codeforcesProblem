#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int p[x];
    int q[x];
    for(int i=0;i<x;i++){
        cin>>p[i];
        cin>>q[i];
    }
    int k=0;
    int count=0;
    for(int i=0;i<x;i++){
        k=q[i]-p[i];
        if(k>1){
            count++;
        }
    }
    cout<<count;
    return 0;
}