/*
 *	header archive, working with classes on C++
 *	class person:
 *	public
 *	setName and getName
 *	
 *	private
 *	String name
 *
 *
 */

#ifdef CLASS_H
#define CLASS_H


#include <string>
using namespace std;

class Person
{
	public:
		void setName(string name);
		string getName();

	private:
		string name;

};

#endif
