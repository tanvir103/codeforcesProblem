#include<iostream>
using namespace std;
int main(){
    int x, a, b, c,count=0;
    cin>>x;
    for(int i=x;i>0;i--){
        cin>>a>>b>>c;
        if(a+b+c>=2){
            count+=1;
        }
    }
    cout<<count;
    return 0;
}