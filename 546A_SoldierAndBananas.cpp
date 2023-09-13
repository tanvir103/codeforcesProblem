#include<iostream>
using namespace std;
int main(){
    int c,d,b=0;
    cin>>c>>d>>b;
    int money=0;
    for(int i=1;i<=b;i++){
        money=money+(i*c);

    }
    int borrow=0;
    borrow=money-d;
    if(borrow<0){
        borrow=0;
    }
   cout<<borrow;
    return 0;
}