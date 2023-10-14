#include<iostream>
using namespace std;
int main(){
    int totalProblem;
    cin>>totalProblem;
    int time;
    cin>>time;
    int remain=240-time;
    int sum=0;
    int problem=0;
    for(int i=1;i<=totalProblem;i++){
        sum=sum+5*i;
        
        if(sum>remain){
            problem=i-1;
            break;
        }else if(sum>=remain){
            problem=i;
            break;
        }else if(sum<remain){
            problem=i;
        }
    }
    cout<<problem;
    
}