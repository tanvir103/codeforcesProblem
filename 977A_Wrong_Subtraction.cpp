#include<iostream>
using namespace std;

int main(){
    int number=0;
    cin>>number;
    int k=0;
    cin>>k;
    for(int i=0;i<k;i++){
        if(number%10!=0){
            number-=1;
        }else if(number%10==0){
            number=number/10;
        }
    }
    cout<<number;
    return 0;
}