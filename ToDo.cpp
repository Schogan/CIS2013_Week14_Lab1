
#include "ToDo.h"
using namespace std;


ToDo::ToDo(int len){
	length = len;
	list = new string[length];
}
void ToDo::add(string item){
	if (next < length){
	list[next]=item;
	next++;
	}
}

void ToDo::done(){
	next--;
	list[next] = "";
}

void ToDo::print(){
	for(int i=0;i<next;i++){
		cout << " * " << list[i] << endl;
	}
}
