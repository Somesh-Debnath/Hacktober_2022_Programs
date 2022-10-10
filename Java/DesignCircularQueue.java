// https://leetcode.com/problems/design-circular-queue/

class MyCircularQueue {
    int[] arr;
    int front=-1,rear=-1;
    int size;
    public MyCircularQueue(int k) {
     arr=new int[k];
        size=k;

    }
    
    public boolean enQueue(int value) {
        if(isFull())
            return false;
        else if(front==-1 && rear==-1)
            {
                front=0;
                  rear=0;
                  arr[rear]=value;
             }
        else{
            rear=(rear+1)%size;
             arr[rear]=value;
            }
            
        return true;
        
    }
    
    public boolean deQueue() {
        if(isEmpty())
        return false;
      if(front==rear)
            {
                front=-1;
                rear=-1;
            }
        else
          front=(front+1)%size;
    
        return true;
    }
    
    public int Front() {
        if(isEmpty())
            return -1;
        else
        return arr[front];
        
    }
    
    public int Rear() {
         if(isEmpty())
            return -1;
        else
        return arr[rear];
        
    }
    
    public boolean isEmpty() {
        if(front==-1 && rear==-1)
            return true;
        else
            return false;
        
    }
    
    public boolean isFull() {
        if(front==(rear+1)%size) 
            return true;
        else
            return false;
        
        
    }
}

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue obj = new MyCircularQueue(k);
 * boolean param_1 = obj.enQueue(value);
 * boolean param_2 = obj.deQueue();
 * int param_3 = obj.Front();
 * int param_4 = obj.Rear();
 * boolean param_5 = obj.isEmpty();
 * boolean param_6 = obj.isFull();
 */
