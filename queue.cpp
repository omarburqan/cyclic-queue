#include "queue.h"

Queue::Queue(int capacity):m_capacity(capacity),m_size(0),m_front(-1),m_rear(-1),m_vector(new std::vector<int>()){
	for (int i = 0; i < m_capacity ; i++){
		m_vector->push_back(-1);
	}
}

Queue::~Queue(){ 
	delete m_vector;
}

bool Queue::enQueue(int x){
	if( m_size == m_capacity )
		return false;
		
	if (m_front == -1){
		++m_front;
	}
	else if(m_rear == m_capacity-1)
		m_rear = 0;
		
	m_vector->at(++m_rear) = x;	
	++m_size;
	
	return true;
}

int Queue::deQueue(){
	if( m_size == 0 )
		return 0;
		
	if(m_front == m_capacity)
		m_front = 0;
		
	int res = m_vector->at(m_front);
	--m_size;
	m_vector->at(m_front++) = -1;
	
	return res;
	
}
void Queue::displayQueue() 
{ 
   if (m_size == 0) 
    { 
        printf("\nQueue is Empty\n"); 
        return; 
    } 
    printf("\nElements in Circular Queue are: "); 
    if (m_rear >= m_front) 
    { 
        for (int i = m_front; i <= m_rear; i++) 
            printf("%d ",m_vector->at(i)); 
    } 
    else
    { 
        for (int i = m_front; i < m_capacity; i++) 
            printf("%d ", m_vector->at(i)); 
  
        for (int i = 0; i < m_rear; i++) 
            printf("%d ", m_vector->at(i)); 
    }
    printf("\n");
}

