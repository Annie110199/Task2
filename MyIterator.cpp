#include "MyIterator.h"


using namespace std;
using namespace N;




//void N::Iterator::start()
//{
//}

//void N::Iterator::next()
//{
//}

//bool N::Iterator::finish()
//{
//	return false;
//}

//int N::Iterator::getValue()
//{
//	return 0;
//}

N::MyIterator::MyIterator(MyQueue * x)
{
		obj = x->begin;
}

N::MyIterator::MyIterator (int* ar)
{
	obj = ar;
}
int & N::MyIterator::operator*()
{
		return *obj;
}
