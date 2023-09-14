#include <bits/stdc++.h>
using namespace std;
int main()
{
    string y;
    cin>>y;
    string x;
    cin>>x;
    reverse(x.begin(), x.end());
    if(x==y){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}