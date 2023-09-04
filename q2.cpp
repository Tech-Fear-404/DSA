#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	cin>>n;
	string ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	for(int i=1;i<n;i++){
		string cur=ar[i];
		int j=i-1,swapped=0;
		while(ar[j].compare(cur)>0 && j>=0){
			ar[j+1]=ar[j];
			swapped=1;
			j--;
		}
		ar[j+1]=cur;
		cout<<"After iteration "<<i<<" : ";
		for(int i=0;i<n;i++){
			cout<<ar[i]<<"\t";
		}
		cout<<"\n";
	}
	for(int i=0;i<n;i++){
			cout<<ar[i]<<"\t";
		}
	return 0;
}
