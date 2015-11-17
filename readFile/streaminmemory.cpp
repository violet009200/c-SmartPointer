//p.544
#include <strstream.h>
#include <stdlib.h> //for exit()

int main(){
	const int ARRSIZE = 100;
	double values[ARRSIZE];
	const int LINEBUFSIZE =81;
	char comChar;
	int index, count;
	istrteam comStream(command,LINEBUFSIZE);
	char prompt[] = "ENTER YOUR COMMAND FOLLOWED BY ENTER: ";
	cout <<prompt<<flush;
	
	while(cin.getline(command,LINEBUFSIZE)){
		comStream.seekg(0); //reset the stream to the beginneing of the command
		comStream>> comChar; //extract a char
		switch(comChar){
			case 'i':
				comStream>>index; //extrat an int
				if(0<index && index <= ARRSIZE){
					comStream>>value[index-1]; //extract double
				
				}
				else cout<<"Index out of range"<<endl;
				break;
				
			case 'p':
				comStream>>count;
				if(0<count && count <=ARRSIZE){
					for(index = 0; index<count-1; index++)
						cout<<values[index]<<'';
						
					cout<<endl;
				}
				else
					cout<<"count out of range"<<endl;
				break;
		}
		cout<<prompt<<flush;
	}
}
