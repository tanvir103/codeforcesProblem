#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int data[x];
    for(int i=0;i<x;i++){
        cin>>data[i];
    }
    string m="EASY";
    for(int i=0;i<x;i++){
        if(data[i]==1){
            m="HARD";
            break;
        }
    }
    cout<<m;
    return 0;
}