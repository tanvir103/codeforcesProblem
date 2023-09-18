#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int x;
    double sum=0.0;
    int num[110];
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>num[i];
        sum+=num[i];
    }
    double ans=0.0;
    ans=sum/x;
    cout<<fixed<<setprecision(12)<<ans;
    return 0;
}