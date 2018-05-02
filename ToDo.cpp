#include <fstream>
#include "ToDo.h"
using namespace std;


ToDo::ToDo(int len){
	length = len;
	list = new string[length];
}
ToDo::ToDo(){
	ToDo(5);
}



ToDo::~ToDo(){
	savefile();
	delete [] list;
}
void ToDo::add(string item){
	if (next < length){
	list[next]=item;
	next++;
	}
}

void ToDo::remove(){
	next--;
	list[next] = "";
}

void ToDo::print(){
	//ofstream savefile;
	//savefile.open("save.txt");
	for(int i=0;i<next;i++){
		cout << " * " << list[i] << endl;
		
		//savefile << list[i] <<endl;
	}
}

void ToDo::done(){
	
}

void ToDo::savefile(){
	ofstream savefile;
	savefile.open("save.txt");
	if(savefile.fail()){
		cout << "Something really awful happened here with save.txt";
		exit(1);
	}
	
	for(int i=0;i<next;i++){	
		savefile << list[i] <<endl;
	}
	
	savefile.close();
}
