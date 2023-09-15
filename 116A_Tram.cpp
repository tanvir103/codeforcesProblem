#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int l=0;
    cin>>l;
    int a;
    int b;
    int still=0;
    int capacity=0;

    for(int i=0;i<l;i++){
        cin>>a;
        cin>>b;
        still-=a;
        still+=b;
        capacity=max(capacity,still);

    }

    cout<<capacity;
    return 0;
}