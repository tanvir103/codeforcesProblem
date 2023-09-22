#include <bits/stdc++.h>
using namespace std;
int main(){
    int l;
    cin>>l;
    int x;
    cin>>x;
    int level[250];
    for(int i=0;i<x;i++){
        cin>>level[i];
    }
    int y;
    cin>>y;
    int ylevel[y];
    for(int i=x;i<x+y;i++){
        cin>>level[i];
    }
    sort(level,level+(x+y));
    int count=0;
    for(int i=0;i<x+y;i++){
        if(level[i]!=level[i+1]){
            count++;
        }
        
    }
    if(l==count){
        cout << "I become the guy." <<endl;
    }else{
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}