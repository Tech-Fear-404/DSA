#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	for(int i=1;i<n;i++){
		int cur=ar[i];
		int j=i-1;
		while(ar[j]>cur && j>=0){
			 ar[j+1]=ar[j];
		}
		ar[j+1]=cur;
	}
	return 0;

}