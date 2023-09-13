#include<iostream>
using namespace std;
int main(){
    int a,b=0;
    cin>>a;
    cin>>b;
    int year=0;
    while(a<=b){
        a=a*3;
        b=b*2;
        year++;
    }
cout<<year;
return 0;
}