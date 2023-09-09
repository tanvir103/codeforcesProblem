#include<iostream>
using namespace std;
 
int add(int x){
    if(1<=x<=100){
        return x;
    }
}
 
int main(){
    int x;
    cin>>x;
    int y=add(x);
    if(y%2==0 && y!=2){
        cout <<"YES";
    }else{
        cout<<"No";
    }
}