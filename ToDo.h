#include <iostream>
#include <cstring>

using namespace std;


class ToDo{
	private:
		string *list;
		int length = 0;
		int next = 0;
	
	public:
		ToDo(int len);
		
		//add stuff to list
		void add(string item);
		
		//All done with ToDo list
		void done();
		
		//print list
		void print();
};