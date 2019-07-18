#include <iostream>
#include "Singleton.h"

using namespace std;

class SObject
{
	friend class Singleton<SObject>;

	SObject(const SObject& obj);
	SObject& operator=(const SObject& obj);
	
	SObject()
	{	
	}
public:	
	void Print()
	{
		cout << this << endl;
	}
};

int main()
{
	SObject* s = Singleton<SObject>::GetInstance();
    SObject* s1 = Singleton<SObject>::GetInstance();
    SObject* s2 = Singleton<SObject>::GetInstance();
    
    s->Print();
    s1->Print();
    s2->Print();
	
	return 0;
}