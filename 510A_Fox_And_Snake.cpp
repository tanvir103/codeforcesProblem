#include <iostream>
using namespace std;
int main() {
	int r, c;
	int turn=1;
	cin>>r>>c;
	char pattern[r][c];
	for (int i=0;i<r;i++) {
		for (int j=0;j<c;j++) {
			if ((i+1)%2==0) {
				pattern[i][j]='.';
			}
			else{
                pattern[i][j]='#';
            }
		}
	}
	for (int i=1;i<r;i+= 2) {
		if(turn==1){
			pattern[i][c-1]='#';
			turn=0;
		}
		else{
			pattern[i][0]='#';
			turn=1;
		}
	}
	for (int i=0;i<r;i++) {
		for (int j=0;j<c;j++) {
			cout <<pattern[i][j];
		}
		cout<<endl;
	}
	return 0;
}