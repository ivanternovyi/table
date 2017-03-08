#ifndef _VECTOR_H_
#define _VECTOR_H_
#include <string>
#include "table.h"
#include <iostream>

using namespace std;

class vector
{
private:
	couple *arr; 
	int count;
	int quantity;	   
public:		
	vector()
	{
		quantity = 2;
		count = 0;
		arr = new couple[quantity];
	}

	void add_couple();

	void input();

	int get_quantity();
	
	couple get_couple();

	bool is_empty();
	
	couple& operator[](int index);
	
};

#endif // _VECTOR_H_

