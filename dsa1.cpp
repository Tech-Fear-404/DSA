#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n;
	int ar1[n];
	for(int i=0;i<n;i++)
		cin>>ar1[i];
	cin>>m;
	int ar2[m];
	for(int i=0;i<m;i++)
		cin>>ar2[i];
	if(n>=m){
		for(int i=0;i<m;i++)
			cout<<ar1[i]+ar2[i]<<"\t";
		for(int i=m;i<n;i++)
			cout<<ar1[i]<<"\t";
	}
	else{
		for(int i=0;i<n;i++)
			cout<<ar1[i]+ar2[i]<<"\t";
		for(int i=n;i<m;i++)
			cout<<ar2[i]<<"\t";
	}
	return 0;
}