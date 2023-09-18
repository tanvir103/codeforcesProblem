#include<iostream>
using namespace std;
int main(){
    long long x,sum;
    cin>>x;
    if(x%2==0){
       sum=x/2;
    }else{
        sum=((x+1)/2)*-1;
    }
    cout<<sum;
    return 0;
}