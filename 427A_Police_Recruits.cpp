#include<iostream>
using namespace std;
int main(){
    int x,positive=0,count=0;
    cin>>x;
    for(int i=0;i<x;i++){
        int l;
        cin>>l;
        if(l==-1){
            if(positive>0){
                positive--;
            }else{
                count++;
            }
        }else{
            positive+=l;
        }
    }
    cout<<count<<endl;
    return 0;
}