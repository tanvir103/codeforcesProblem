#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    string a;
    cin>>a;
        if(!isupper(a[0])){
            a[0]=a[0]-32;
        }
    cout<<a;
}