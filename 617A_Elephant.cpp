#include<iostream>
using namespace std;
int main(){
    int n,ans=0;
    int mul[5]={5,4,3,2,1};
    cin>>n;
    for(int i=0;i<5;i++){
        ans+=n/mul[i];
        n=n%mul[i];
    }
    cout<<ans;
    return 0;
}