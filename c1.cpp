#include<iostream>
using namespace std;
// class operation{
// 	int a,b,add;
// public:
// 	void get(){
// 		cout<<"Enter a value: ";
// 		cin>>a;
// 		cout<<"Enter second value: ";
// 		cin>>b;
// 	}
// 	void sum();
// }s;
// inline void operation::sum(){
// 	add=a+b;
// 	cout<<"Addition of two numbers: "<<add;
// }
// int main(){
// 	s.get();
// 	s.sum();
// 	return 0;
// }
int square(int s){
	return s*s;
}
int main(){
	cout<<"square of the number is: "<<square(5);
	return 0;
}