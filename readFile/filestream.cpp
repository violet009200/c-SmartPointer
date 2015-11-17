//read file
#include<iostream.h>
#include <fstream.h>

void exit(int);

int main(){
	ifstream infile("file1",ios::in); //input file stream attached to the file1
	if(!infile) fileError("Opening file1 failed");
	
	ofstream outfile; //output file stream 
	outfile.open("file2",ios::out);//output file stream on the file file2
	if(!outfile) fileError("Opening file2 failed");
	
	outfile.close(); //outfile can be opened again on a different output file
	outfile.open("file3",ios::out); //output file stream attached to the file3
	
}
