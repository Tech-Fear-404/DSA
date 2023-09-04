#include<iostream>
using namespace std;
struct emp{
	int id;
	string name;
	float fee;
}s;
int main(){
	emp *e=new emp;
	e->id=100;
	e->name="cse";
	e->fee=345.678;
	int x=7;
	int *p=&x;
	int **pp=&p;
	int ar[5];
	cout<<e->fee;
	cout<<endl<<e->name;
	cout<<endl<<e->id;
	cout<<endl<<*pp;
	cout<<endl<<sizeof(pp)<<endl;
	return 0;
}