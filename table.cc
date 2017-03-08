#include "table.h"
#include <iostream>
#include <string>


using namespace std;

	void couple::set_couple ()
	{
		cout << "Input key: ";
		getline(cin, key);
		cout << "Input value: ";
		getline(cin, value);	
	
	}
	
	string couple::get_value()
	{
		return this->value;
	}
	
	string couple::get_key()
	{
		return this->key;
	}
	void couple::delete_value()
	{
	   value.clear();
	}

	void couple::change_value()
	{
		delete_value ();
		cout << "Input value(for exchange): ";
		cin >> this->value;
	}

	void couple::delete_couple()
	{   
		this->key = " ";
		this->value.clear();	
	}

	couple& couple::operator = (const couple& p)
	{
		if (this != &p)
		{
			key = p.key;
			value = p.value;
			
		}
		return *this;
	}

	ostream& operator << (ostream& os, const couple& p)
	{
		os << "Key: " << p.key << " - Value: " << p.value << endl;
		return os;
	}