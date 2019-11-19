#include "queue.h"

using std::cout;
using std::endl;



int main() {
	
	Queue q(5); 
  
    q.enQueue(14); 
    q.enQueue(22); 
    q.enQueue(13); 
    q.enQueue(-6); 
    q.enQueue(9); 
  
    q.displayQueue();
    
    q.deQueue();
    q.displayQueue(); 
	q.deQueue(); 
    q.displayQueue();
	q.deQueue();
    q.displayQueue();
    
    q.enQueue(100); 
  	q.displayQueue();
    q.enQueue(200); 
    q.displayQueue();
    
	q.deQueue();
    q.displayQueue(); 	
	q.deQueue(); 
    q.displayQueue();

    return 0; 
}
