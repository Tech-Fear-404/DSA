#include<iostream>
#include<cmath>
#include<limits.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	int target,count,ar2[n];
	cin>>target>>count;
	for(int i=0;i<n;i++){
		ar2[i]=abs(ar[i]-target);
	}
	for(int j=0;j<count;j++){
		
	if(j%2==0){
		int miin=ar2[0],index=0;
			for(int i=n-1;i>=0;i--){
			if(miin>ar2[i]){
				miin=ar2[i];
				index=i;
			}
		}
	for(int i=n-1;i>=0;i--){
		if(ar2[i]==miin){
			cout<<ar[i]<<"\t";
				ar2[index]=INT_MAX;
			break;
		}
	}
}
else{
	int miin=ar2[0],index=0;
		for(int i=1;i<n;i++){
			if(miin>ar2[i]){
				miin=ar2[i];
				index=i;
			}
		}
	for(int i=0;i<n;i++){
		if(ar2[i]==miin){
			cout<<ar[i]<<"\t";
			ar2[index]=INT_MAX;
			break;
}
}
}
}
	return 0;
}
