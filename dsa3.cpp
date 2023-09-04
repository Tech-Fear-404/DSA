#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
		cin>>ar[i];
	int maxc=0,v=0;
	for(int i=0;i<n;i++){
		int count=0;
		for(int j=0;j<n;j++){
			if(ar[i]==ar[j])
				count++;
		}
		if(maxc<count){
			maxc=count;
			v=ar[i];
		}
	}
	if(n%2==0){
		if(maxc>=(n/2))
			cout<<v;
		else
			cout<<"NO majority";
	}
	else{
		if(maxc>=(n/2)+1) 
			cout<<v;
		else
			cout<<"no majority";
	}
	return 0;
}