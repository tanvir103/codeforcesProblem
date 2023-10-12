#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int min=0,max=0,count=0;
    for(int i=0;i<x;i++){
        int x;
        cin>>x;
        if(!i){
            min=x;
            max=min;
        }else{
            if(x>max){
            max=x;
            count++;
        }
        else if(x<min){
            min=x;
            count++;
        }
        }
    }
    cout<<count;
    return 0;
}