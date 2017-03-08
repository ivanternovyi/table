#include <iostream>
#include <string>
#include "vector.h"
#include "table.h"

using namespace std;

	void vector::add_couple()
	{
		couple new_element;
		new_element.set_couple();
		arr[count] = new_element;
		count++;
		if(count == quantity) 
		{
			couple *arr_for_exchange = new couple[count];
			for(int counter = 0; counter < quantity; counter++)
			{
				arr_for_exchange[counter] = arr[counter];
			}
			delete[] arr;
			quantity = quantity + 1;
			arr = new couple[quantity];
			for(int counter = 0; counter < quantity - 1; counter++)
			{
				arr[counter] = arr_for_exchange[counter];
			}
			delete[] arr_for_exchange;
		}
	}

	void vector::input()
	{
		add_couple ();
		while(cin.get() != 'q')
		{
			add_couple ();
		}
	}

	couple vector::get_couple()
	{
		count--;
		return arr[count] ;
	}

	int vector::get_quantity()
	{
		return this->quantity;
	}	

	bool vector::is_empty()
	{
		return count == 0;
	}


	couple& vector::operator[](int index)
	{
		return arr[index];
	}


/*
bool test_is_empty() //test method checks whether stack is empty;
{
	bool test_result = true;
	stack st;
	test_result &= st.is_empty();
	st.push(1);
	test_result &= !st.is_empty();
	st.pop();
	test_result &= st.is_empty();
	return test_result;
}

bool test_push_pop() //test methods check correctness of methods push and pop;
{
	stack st;
	for(int counter = 0; counter < 150; counter++)
	{
		st.push(counter);
	}
	bool test_result = true;
	for(int counter = 0; counter < 150; counter++)
	{
		test_result &= st.pop() == abs(counter - 149);
	}
	return test_result;
}

int main()
{
	cout << "Stack is working good: " << test_is_empty () << endl;
	//test if method that dismisses stack works properly ;
	cout << "Stack is working good: " << test_push_pop () << endl;
	//test if methods push, pop work properly;
	return 0;
}
*/
