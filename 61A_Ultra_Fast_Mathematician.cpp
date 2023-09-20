#include<iostream>
using namespace std;
int main(){
    string x;
    string y;
    cin>>x;
    cin>>y;
    int lengthofx=x.length();
    int lengthofy=y.length();
    string m[lengthofx];
    for(int i=0;i<lengthofx;i++){
        if(x[i]!=y[i]){
            m[i]="1";
        }else{
            m[i]="0";
        }
    }
    for(int i=0;i<lengthofx;i++){
        cout<<m[i];
    }
    return 0;
}