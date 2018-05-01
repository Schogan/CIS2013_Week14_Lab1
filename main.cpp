#include <iostream>
#include <cstring>
#include "ToDo.h"
using namespace std;


int main(){
	char next = 'y';
	int len = 0;
	string action;
	
	cout << "How long do you want your list? "<< endl;
	cin >> len;
	
	ToDo list(len);
	
	//Array of ToDo objects
	//Make sure you have a () constructor
	ToDo manyLists[10];
	
	while(next != 'x'){
		
		cout << "Add to list (a)" << endl;
		cout << "Remove  list item (r)" << endl;
		cout << "Print List (p)" << endl;
		cout << "Exit list app (x)" << endl;
		cout << "What do you want to do? ";
		cin >> next;
		
		switch(next){
			case 'a':
				cout << "name a todo item:";
				//cin >> action;
				cin.ignore();
				getline(cin, action, '\n');
				list.add(action);
				break;
			case 'r':
				list.remove();
				break;
			case 'p':
				list.print();
				break;
			case 'x':
				list.done();
				
		}
	}
	
}