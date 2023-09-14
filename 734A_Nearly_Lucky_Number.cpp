#include<iostream>
using namespace std;

int main(){
    string a;
    cin>>a;
    int length=a.length();
    int count=0;
    for(int i=0;i<length;i++){
       if(a[i]=='4'||a[i]=='7'){
        count++;
       }
    }
    if((count==4)||(count==7)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}