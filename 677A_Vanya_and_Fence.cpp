#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int h;
    cin>>h;
    int person[x];
    for(int i=0;i<x;i++){
        cin>>person[i];
    }
    int count=0;
    for(int i=0;i<x;i++){
      if(person[i]>h){
        count+=2;
      }else if(person[i]<=h){
        count+=1;
      }
    }
    cout<<count<<endl;
    return 0;
}