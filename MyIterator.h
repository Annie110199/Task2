#pragma once
#include "MyQueue.h"
#include <iterator>



namespace N {
	class MyIterator
	{
		int *obj;
	public:
		MyIterator(int* ar);
		MyIterator(MyQueue* x); //� ����������
		
		void operator++()//���������� ++
		{
			obj = obj + 1;
		}
		int& operator*(); // �������������

		bool operator==(MyIterator& x)
		{
			return (obj == x.obj);
		}
		bool operator!=(MyIterator& x)
		{
			return (obj != x.obj);
		}

//	private:
		
	};}