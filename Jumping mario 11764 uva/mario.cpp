#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	freopen("mariofile","rt",stdin);
	int cases,walls,hight[50];
	cin>>cases;
	for(int x=0;x<cases;x++){
		cin>>walls;
		int high=0,low=0;
		for(int z=0;z<walls;z++){
			cin>>hight[z];

		}
		int comp=hight[0];
		for(int index=0;index<walls;index++){
			if(comp<hight[index]){
				comp=hight[index];
				high++;
			}
			else if(comp>hight[index]){
				comp=hight[index];
				low++;

			}
		}
		cout<<"Case "<<x+1<<": "<<high<<" "<<low<<endl;
	}
	return 0;
}
