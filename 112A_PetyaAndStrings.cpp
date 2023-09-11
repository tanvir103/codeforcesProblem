#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
    string a;
    cin>>a;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    string b;
    cin>>b;
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    int r=a.compare(b);
    cout<<r;
}