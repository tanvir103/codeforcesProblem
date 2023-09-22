#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    if(x==1){
        cout<<"I hate it";
    }else if(x>1){
        cout<<"I hate that";
    }
    for(int i=2;i<x;i++){
        if(i%2==1 && i!=x){
            cout<<" I hate that";
            
        }else if(i%2==0 && i!=x){
            cout<<" I love that";
        }
    }
    if(x%2==0 && x>1){
        cout<<" I love it";
    }else if(x>1){
        cout<<" I hate it";
    }
    return 0;
}