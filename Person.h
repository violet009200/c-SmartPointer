//Person.h: a composite class with three data mamebers of class type
#include "String.h"
#include "Date.h"
//book chap 10.2.4 p.476
class Person{
	public:
		Person(const char* name, const char* address, 
			const char* month, int day, int year, long ssn);
		Person(const char* name,const char* address, 
			const Date&birthdate, long ssn);
		//other member functions..
		
	protected:
		String name_;
		String address_;
		const Date birthdate_;
		const long ssn_;
};
