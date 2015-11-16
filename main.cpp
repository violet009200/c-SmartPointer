//client use of PersonPtr
#include <iostream>
#include <Person.h>
#include <PersonPtr.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	long ssn;
	cin>>ssn;
	PersonPtr pPers(ssn);
	//access the person's name
	String str(pPers->name());
	//pass the object by reference to ostream& operator<<(ostream&, const Person&)
	cout<<"The person with ssn"<< ssn<<"is"<<*pPers<<'.'<<endl;

}//PersonPtr destructor called
