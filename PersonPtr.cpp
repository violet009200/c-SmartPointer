//smart pointer constructor and access operators
#include <PersonPtr.h>

//The methods for 
//PersonPtr::operator->()
//and PersonPtr::operator*() 
//check whether the hidden pointer is NULL and reload the object if so. 
//Smart pointer's destructor also check the pointer and writes the object to the file
//and removes it from the cache if the pointer is not NULL
//whether the member pPers is null is not visible to the client

inline PersonPtr::PersonPtr(long socSecNum)
	:ssn(socSecNum),pPerson(NULL)
	{}
	
inline Person* PersonPtr::operator*(){
	if(aPerson == NULL) pPerson = cache.loadFromFile(ssn,personIndex,pPerson);
	//THe cache finds space, and then load the object; the cache must keep a
	//reference to this->pPerson to set it to NULL if the object gets swapped out
	return pPerson;
}

inline Person& PersonPtr::operator*(){
	if(pPerson == NULL)
		pPerson = cache.loadFromFile(ssn,personIndex,pPerson);
	return *pPerson;
}
