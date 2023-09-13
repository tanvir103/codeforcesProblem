#include<iostream>
using namespace std;
int main(){
    int n=0;
    cin>>n;
    string colour;
    cin>>colour;
    int count=0;
    for(int i=1;i<=colour.length();i++){
        if(colour[i]==colour[i-1]){
            count+=1;
        }
    }
    cout<<count;
    return 0;
}