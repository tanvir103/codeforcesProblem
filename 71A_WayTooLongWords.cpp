#include<iostream>
using namespace std; 
int main(){
    int x;
    string k;
    cin>>x;
    for(int i=x;i>0;i--){
        cin>>k;
        if(k.length()>10){ 
            cout<<k[0]<<k.length()-2<<k[k.length()-1]<<endl; 
       
        }else{
            cout<<k<<endl;
        }
    }
    return 0;
}