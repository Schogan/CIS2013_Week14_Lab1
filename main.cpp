#include <iostream>
#include <cstring>
#include "ToDo.h"
using namespace std;


int main(){
	char next = 'y';
	int len = 0;
	
	cout << "How long do you want your list? "<< endl;
	cin >> len;
	
	ToDo list(len);
	
	while(next != 'x'){
		
		cout << "Add to list (a)" << endl;
		cout << "Done  list item (d)" << endl;
		cout << "Print List (p)" << endl;
		cout << "Exit list app (x)" << endl;
		cout << "What do you want to do? ";
		cin >> next;
		
		switch(next){
			case 'a':
				list.add("something");
				break;
			case 'd':
				list.done();
				break;
			case 'p':
				list.print();
				break;
			case 'x':
				list.done();
				
		}
	}
	
}