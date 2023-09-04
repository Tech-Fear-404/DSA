#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>m>>n;
	int ar[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			cin>>ar[i][j];
	}
	int target,c=0;
	cin>>target;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			{
				if(ar[i][j]==target){
					cout<<"["<<i<<"]["<<j<<"]"<<endl;
					c++;
				}
			}
	}
	if(c==0)
		cout<<"Element "<<target<<" not found.";
	return 0;
}