#include <iostream>
#include <cstring>

using namespace std;


class ToDo{
	private:
		string *list;
		int length = 0;
		int next = 0;
	
	public:
	
		//default constructor
		ToDo();
		//constructor
		ToDo(int len);
		//destructor
		~ToDo();
		//add stuff to list
		void add(string item);
		
		//All done with ToDo list
		void remove();
		
		//print list
		void print();
		
		void done();
};