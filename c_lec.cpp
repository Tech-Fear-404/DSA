#include<iostream>
using namespace std;
// struct profile{
// 	int id;
// };
// struct employee{
// 	profile p;
// };
// int main(){
// 	employee e;
// 	int &ref=e.p.id;
// 	ref=34;
// 	cout<<e.p.id<<endl;
//void swap(int &x , int &y){
//	int temp=x;
//	x=y;
//	y=temp;
//	cout<<"After swapping A and B be"<<x<<" "<<y;
//};
//int main(){
// 	int a=100;
// 	int b=200;
// 	cout<<"Before swap a and b be : "<<a<<" "<<b;
// 	swap(a,b);
//	return 0;
//}
int main)(){
	int n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		loc=a[i];
		for(j=1+i;j<n;j++){
			if(a[j]<a[loc])
			loc=j;
		}
		if(loc !=i)
		{
			int temp = a[i];
			a[i] = a[loc];
			a[loc] = temp;
		}
	}
	cout<<"After sorted array element are ";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	
	
}
