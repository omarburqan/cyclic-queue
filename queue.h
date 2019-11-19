#ifndef __QUEUE_H__
#define __QUEUE_H__
#include <iostream>
#include <vector>
#include <stdio.h>

class Queue{
	
	public:
	
		Queue(int capacity);
		~Queue();
		bool enQueue(int x); 
		int deQueue(); 
		bool isEmpty();
		void displayQueue();
		
	private:
		int m_capacity;
		int m_size;
		int m_front;
		int m_rear;
		std::vector<int> *m_vector;

		
};



#endif /* __QUEUE_H__ */
