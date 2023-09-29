#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    string name[x];
    for(int i=0;i<x;i++){
        cin>>name[i];
    }
    int count=0;
    for(int i=0;i<x;i++){
        if(name[i]=="Tetrahedron"){
            count+=4;
        }else if(name[i]=="Cube"){
            count+=6;
        }else if(name[i]=="Octahedron"){
            count+=8;
        }else if(name[i]=="Dodecahedron"){
            count+=12;
        }else if(name[i]=="Icosahedron"){
            count+=20;
        }
    }
    cout<<count;
    
    return 0;
}