#include <iostream>
#include "table.h"
#include "vector.h"
#include <string>

using namespace std;

void output(vector v);

int find_by_key (vector v, string str);


int main(void)
{
	vector v;
	cout << "In empty fields: input 'q' if you want to stop, press"
		<< " 'enter' to proceed!" << endl;
	v.input ();
	cout<<"/////////////////////////////////"<<endl;
	output(v);
	cout<<"/////////////////////////////////"<<endl;
	int position = find_by_key (v, "kek");
	if(position == -1)
	{
		cout << "No such key!" << endl;
		return 0;
	}
	cout << v[position];
	v[0].change_value ();
	cout<<"/////////////////////////////////"<<endl;
	output(v);
	v[position].delete_couple ();
	cout<<"/////////////////////////////////"<<endl;
	output(v);
	return 0;
}

void output(vector v)
{
	for (int i = 0; i < sizeof(v) ; i++)
	{
		if(v[i].get_key () == "")
		{
			break;
		}
		if(v[i].get_key () == " ")
		{
			continue;
		}
		cout << v[i];
	} 
}

int find_by_key (vector v, string str)
{
	for(int i = 0; i < v.get_quantity(); i++)
	{
    	if(str == v[i].get_key ())
		{
			cout << "Expression by key '" << str << "' is : " << endl;
			return i;
		}
	}
	return -1;
}