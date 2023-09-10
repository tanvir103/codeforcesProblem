#include<iostream>
using namespace std;
int main(){
    int n=0;
    cin>>n;
    string array[n];
    int x=0;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int i=0;i<n;i++){
        if((array[i]=="X++")||(array[i]=="++X")){
            x+=1;
        }else if((array[i]=="X--")||(array[i]=="--X")){
            x-=1;
        }
    }
    cout<<x<<endl;
    return 0;
    
}