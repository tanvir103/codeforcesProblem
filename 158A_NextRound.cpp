#include<iostream>
using namespace std;
int main(){
    int totalperticipent,place,p=0;
    cin>>totalperticipent;
    cin>>place;
    int number[totalperticipent];
    for(int i=0;i<totalperticipent;i++){
        cin>>number[i];
    }
    for(int i=0;i<totalperticipent;i++){
        if(number[i]>=number[place-1]&&number[i]>0){
            p++;
        }
    }
    cout<<p<<endl;
    return 0;
}