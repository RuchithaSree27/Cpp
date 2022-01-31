#include<iostream>
#include<cstring>
using namespace std;
struct  person{
	string name;
	int age;
};

int main(){
	struct person p;
	cout<<"Enter Name"<<endl;
	cin>>p.name;
	cout<<"Enter age"<<endl;
	cin>>p.age;
	cout<<p.name<<endl;
	cout<<p.age<<endl;
}
