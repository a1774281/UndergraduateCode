#include<iostream>
#include"person.h"
#include<string>
using namespace std;

int main() {



	person A, B, C, D;	

	A.setName("Matt");
	A.setSalary(42);	
	B.setName("Jennifer");
	B.setSalary(72);	
	C.setName("Jia");
	C.setSalary(53);
	D.setName("Matthew");
	D.setSalary(21);
	
	
	cout << "Person: "<<A.getName()<<" has salary "<<A.getSalary();
	cout << "Person: "<<B.getName()<<" has salary "<<B.getSalary()<<endl;
	cout << "Person: "<<C.getName()<<" has salary "<<C.getSalary()<<endl;
	cout << "Person: "<<D.getName()<<" has salary "<<D.getSalary()<<endl;

	return 0;

}