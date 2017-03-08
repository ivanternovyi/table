#ifndef _TABLE_H_
#define _TABLE_H_
#include <iostream>
#include <string>


using namespace std;


class couple
{
private:
	string value;
	string key;
public:
	couple() :value(""), key(""){};
	couple(string v, string k) :value(v), key(k){}; 

	void set_couple ();
	
	string get_value();
	
	string get_key();

	void change_value();
	
	void delete_value();

	void delete_couple();
	
	couple& operator = (const couple& p);
	
	friend ostream& operator << (ostream& os, const couple& p);
};


#endif 