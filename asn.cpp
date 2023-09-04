#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	int m;
	cin>>m;
	int ar[m];
	for(int i=0;i<m;i++){
		cin>>ar[i];
	}
	int t=n+m;
	int ar2[t];
	int i=0,j=0,k=0;
	while(i<n){
		c[k++]=a[i++];
	}
	while(i<m){
		c[k++]=b[i++];
	}
	for(int i=0;i<t;i++){
		cout<<ar[i]<<" ";
	}
	for(i=0;i<t;i++)
		cout<<c[i]<<" ";
	return 0;
}