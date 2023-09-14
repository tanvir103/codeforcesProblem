#include<iostream>
using namespace std;
int main()
{
    int n,An=0,Da=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='A')
            An++;
        else if(s[i]=='D')
            Da++;
    }
    if(An==Da){
        cout<<"Friendship"<<endl;
    }  
    else if(An>Da){
        cout<<"Anton"<<endl;
    }  
    else{
        cout<<"Danik"<<endl;
    }
      return 0;  
}