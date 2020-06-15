#pragma once
#include "MyIterator.h"
using namespace std;

namespace N {
	class MyQueue {
	private:
		const int capacity = 1000000;
		int arr[1000001];
		int start = 0;
		int finish = 0;
	public:
		friend class Iterator;
//		typedef MyIterator<int> iterator;
//		typedef MyIterator<const int> const_iterator;
		MyIterator begin();
		MyIterator end();
		MyQueue();
		void push(int n);
		int pop();
		int front();
		int getLength();
		void clear();
		bool isQueueEmpty();
	};
}