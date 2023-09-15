#include<iostream>
using namespace std;
int main(){
    int x;
    int y;
    cin>>x;
    cin>>y;
    char student[x];
    for(int i=0;i<x;i++){
        cin>>student[i];
    }
    cout<<endl;
        while(y--){
        for(int i=1;i<x;i++){
            if(student[i]=='G' && student[i-1]=='B'){
                student[i]='B';
                student[i-1]='G';
                i++;
            }
        }
    }
    for(int i=0;i<x;i++){
        cout<<student[i];
    }
    return 0;
}