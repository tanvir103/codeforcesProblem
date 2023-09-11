#include<iostream>
using namespace std;
int main(){
    int array[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>array[i][j];
        }
    }
    int column,row=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if((array[i][j]==1)){
                row=i;
                column=j;
            }
                
        }
    }
    int move=0;
    if(column<2){
        for(int i=column+1;i<3;i++){
            array[i][row];

            move+=1;
        }
        cout<<"first:"<<move<<endl;
    }else if(column>2){
        for(int i=column;i>2;i--){
            array[i][row];
            move=move+1;
        }
        cout<<"Second:"<<move<<endl;
    }
    if(row<2){
        for(int j=row+1;j<3;j++){
            array[column][j];
            move+=1;
        }
    }else if(row>2){
        for(int j=row;j>2;j--){
           array[column][j];
            move=move+1;
        }
    }
    cout<<move<<endl;
   return 0;
}