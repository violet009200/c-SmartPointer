#include <iostream>
//p.528
//using istream protocol

void listLines(istream& istr) //istr can be a file, a stream in memeory
{
	const int LINEBUFSIZE = 81;
	char line[LINEBUFSIZE];
	int charCount = 0;
	int longLineCount = 0;
	
	//extract line and stop at the end of the stream
	while(istr.getline(line,LINEBUFSIZE)){
		charCount+=istr.gcount();
		if(istr.fail()){
			line[LINEBUFSIZE-2]='\\';
			longLineCount++;
			
			//clear the fail bit in the stream state
			istr.clear(istr.rdstate()&~ios::failbit);
		}
		else char Count--;
		cout<<lint<<endl;
	}
}
