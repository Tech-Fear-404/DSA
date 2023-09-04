#include<iostream>
using namespace std;
// class array{
// 	char name[100];
// 	int age;
// 	public:
// 	void get_data(int n){
// 		cin>>name>>age;
// 	}
// 	void display(){
// 	cout<<"name: "<<name;
// 	cout<<"\nage "<<age;
// 	}
// };
// int main(){
// 	array s,*ptr;
// 	ptr=&s;
// 	ptr->get_data();
// 	ptr->display();
// 	cout<<endl;
// 	(*ptr).get_data();
// 	(*ptr).display();
// }
// class X{
// 	public:
// 		int a;
// 		void f(int b){
// 			cout<<"the value of b is "<<b<<endl;
// 		}
// };
// int main(){
// 	int X::*pptr=&X::a;
// 	void (X::*ppptr)(int )=&X::f;
// 	X obj;
// 	obj.*pptr=10;
// 	cout<<"The value of a is "<<obj.*pptr<<endl;
// 	(obj.*ppptr)(20);

// }
class test{
	int a,b;
public:
	void show(){
		a=10;b=20;
		cout<<"obj address="<<this<<endl;
		cout<<"a = "<<this->a<<endl;
		cout<<"b = "<<this->b;
	}
}
int main(){
	test t;
	t.show(); 
}