#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    string a;
    cin>>a;
    int length=a.length();
    int count=0;
    int count1=0;
    for(int i=0;i<length;i++){
        if(isupper(a[i])){
            count++;
        }
        if(!isupper(a[i])){
            count1++;
        }
    }
    if(count>count1){
        for(int i=0;i<length;i++){
            if(!isupper(a[i])){
                 a[i]=a[i]-32;
            } 
        }
    }else if(count1>=count){
         for(int i=0;i<length;i++){
            if(isupper(a[i])){
                 a[i]=a[i]+32;
            } 
        }
    }
    cout<<a;
    return 0;
}