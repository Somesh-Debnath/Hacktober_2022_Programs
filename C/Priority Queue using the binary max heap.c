#include <stdio.h>

int heap[40];
int size = -1;

int parent(int i)
{

        return (i - 1) / 2;
}
int left_child(int i) 
{
        return i + 1;
}

int right_child(int i)
{
        return i + 2;
}

int get_Max() 
{
        return heap[0];
}
//Returning the element having the minimum priority  
int get_Min()
{
        return heap[size];
}

void moveUp(int i)
{
        while (i > 0) 
        {
                // swapping parent node with a child node  
                if (heap[parent(i)] < heap[i])
                {

                        int temp;
                        temp = heap[parent(i)];
                        heap[parent(i)] = heap[i];
                        heap[i] = temp;

                }
                // updating the value of i to i/2   
                i = i / 2;
        }
}

void moveDown(int k)
{
        int index = k;

        // getting the location of the Left Child   
        int left = left_child(k);

        if (left <= size && heap[left] > heap[index])
        {
                index = left;
        }

        // getting the location of the Right Child   
        int right = right_child(k);

        if (right <= size && heap[right] > heap[index])
        {
                index = right;
        }

        // If k is not equal to index   
        if (k != index) 
        {
                int temp;
                temp = heap[index];
                heap[index] = heap[k];
                heap[k] = temp;
                moveDown(index);
        }
}

// Removing the element of maximum priority  
void removeMax() 
{
        int r = heap[0];
        heap[0] = heap[size];
        size = size - 1;
        moveDown(0);
}
//inserting the element in a priority queue  
void insert(int p) 
{
        size = size + 1;
        heap[size] = p;

        // move Up to maintain heap property   
        moveUp(size);
}

//Removing the element from the priority queue at a given index i.  
void delete(int i)
{
        heap[i] = heap[0] + 1;

        // move the node stored at ith location is shifted to the root node  
        moveUp(i);

        // Removing the node having maximum priority   
        removeMax();
}
int main()
{
        // Inserting the elements in a priority queue  

        insert(20);
        insert(19);
        insert(21);
        insert(18);
        insert(12);
        insert(17);
        insert(15);
        insert(16);
        insert(14);
        int i = 0;

        printf("Elements in a priority queue are : ");
        for (int i = 0; i <= size; i++)
        {
                printf("%d ", heap[i]);
        }
        delete(2); // deleting the element whose index is 2.  
        printf("\nElements in a priority queue after deleting the element are : ");
        for (int i = 0; i <= size; i++) 
        {
                printf("%d ", heap[i]);
        }
        int max = get_Max();
        printf("\nThe element which is having the highest priority is %d: ", max);

        int min = get_Min();
        printf("\nThe element which is having the minimum priority is : %d", min);
        return 0;
}
