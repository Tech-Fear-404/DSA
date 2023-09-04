#include<iostream>
using namespace std;
class rect{
private:
	int l,w;
	int l1,w1;
public:
	void set(){
		cout<<"enter the length of the rectangle: ";
		cin>>this->l;
		cout<<"enter the width of the rectangle: ";
		cin>>this->w;
		cout<<"enter the length of the rectangle: ";
		cin>>this->l1;
		cout<<"enter the width of the rectangle: ";
		cin>>this->w1;
			}
	void area(){
		cout<<"\nArea of rectangle1 is: "<<(this->l)*(this->w);
		cout<<"\nArea of rectangle2 is: "<<(this->l)*(this->w);
	}
	void comp(){
		if(this->l1==this->l && this->w==this->w1){
			cout<<"\nSame Dimensions";
		}
		else{
			cout<<"\nDifferent dimensions";
		}
	}
};
int main(){
	rect re;
	re.set();
	re.area();
	re.comp();
	return 0;
}

