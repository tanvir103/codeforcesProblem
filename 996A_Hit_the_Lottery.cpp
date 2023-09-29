#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int count=0;
    int div[5]={100,20,10,5,1};
    for(int i=0;i<5;i++){
        count+=x/div[i];
        x%=div[i];
    }
    cout<<count;
    return 0;
}