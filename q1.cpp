#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n;
	cin>>n;
	float ar[n];
	for(int i=0;i<n;i++){
		cin>>fixed>>setprecision(3)>>ar[i];
	}
	for(int i=0;i<n-1;i++){
		int swapped=0;
		for(int j=0;j<n-i-1;j++){
			if(ar[j]>ar[j+1]){
				float temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
				swapped=1;
			}
		}
		if(swapped){
		cout<<"After iteration "<<i+1<<" : ";
		for(int i=0;i<n;i++){
		cout<<setprecision(2)<<fixed<<ar[i]<<"\t";
	}
	cout<<"\n";
}
}
	for(int i=0;i<n;i++){
		cout<<setprecision(2)<<fixed<<ar[i]<<"\t";
	}
	return 0;
}