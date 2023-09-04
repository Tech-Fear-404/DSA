#include<iostream>
using namespace std;
int rec(int x){
	if(x<=1){
		return x;
	}
	else{
		return x*rec(x-1);
	}
};
int main(){
	int n;
	cin>>n;
	cout<<rec(n);
	return 0;
}