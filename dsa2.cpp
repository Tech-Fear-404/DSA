#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ar1[n];
	for(int i=0;i<n;i++)
		cin>>ar1[i];
	int m;
	cin>>m;
	int ar2[m],s3=n+m;
	int ar3[s3];
	for(int i=0;i<m;i++){
		cin>>ar2[i];
		ar3[i]=ar2[i];
	}
	for(int i=0;i<n;i++)
		ar3[i+m]=ar1[i];
	int maxcount=0;
	for(int i=0;i<s3-1;i++){
		int count=0;
		for(int j=0;j<s3;j++){
			if(ar3[i]==ar3[j])
				count++;
		}
		if(maxcount<count)
			maxcount=count;
	}
	int ar[s3];
	for(int i=0;i<s3;i++){
		int count=0;
		for(int j=0;j<s3;j++){
			if(ar3[i]==ar3[j])
				count++;
		}
		if(maxcount==count){
				ar[i]=ar3[i];
		}
		else{
			ar[i]=0;
		}
	}
	for(int i=0;i<s3-1;i++){
		for(int j=i+1;j<s3;j++)
			if(ar[i]==ar[j])
				ar[j]=0;
	}
	for(int i=0;i<s3;i++){
		if(ar[i]!=0)
			cout<<ar[i]<<"\t";
	}
	return 0;
}