//class for smart pointers to Person
//book chap11 p.512
#include "PersonFile.h"
#include "PersonCache.h"

class PersonPtr{
	public:
		//get a handle to an person obj via its ssn
		PersonPtr(long);
		//finalize(write the Person object back to the file if necessary
		~PersonPtr();
		//send message to the Person obj handled by the receiver
		Person* operator->() const;
		//obtain a reference to the Person obj handled by the receiver
		Person& operator*() const;
		
	protected:
		long ssn;
		Person *pPerson; //local copy of the persistent Person object used in 
						 //the application
		PersonPtr(const PersonPtr&);
		PersonPtr& operator = (const PersonPtr&);
		//the class PersonFile is implemented as an indexed or direct file
		static PersonFile personIndex("personIndexData");
		//the class PersonCache is implemented as a fixed size hash table
		static int CACHE_SIZE;
		static PersonCache cache(CACHE_SIZE);
		
};
