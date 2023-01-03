
#ifndef HEAPPRIORITYQUEUE_HEAPPRIORITYYQUEUE_H
#define HEAPPRIORITYQUEUE_HEAPPRIORITYYQUEUE_H

#include "vectorClass.h"
template<typename E>
class HeapPriorityyQueue {
private:
    vectorClass<E> H[50];
    int size = -1;
public:
    int parent(int i){

        return (i - 1) / 2;
    }
    int leftChild(int i){

        return ((2 * i) + 1);
    }
    int rightChild(int i){
        return ((2 * i) + 2);
    }

    void shiftUp(int i){
        while (i > 0 && H.get(parent(i)).getPorcentaje() < H.get(i).getPorcentaje()) {

            // Swap parent and current node
            swap(H.get(parent(i)), H.get(i));
            // Update i to parent of i
            i = parent(i);
        }
    }

// Function to shift down the node in
// order to maintain the heap property
    void shiftDown(int i)
    {
        int maxIndex = i;

        // Left Child
        int l = leftChild(i);

        if (l <= size && H.get(l).getPorcentaje() > H.get(maxIndex).getPorcentaje()) {
            maxIndex = l;
        }

        // Right Child
        int r = rightChild(i);

        if (r <= size && H.get(r).getPorcentaje() > H.get(maxIndex).getPorcentaje()) {
            maxIndex = r;
        }

        // If i not same as maxIndex
        if (i != maxIndex) {
            swap(H.get(i), H.get(maxIndex));
            shiftDown(maxIndex);
        }
    }
    void insert(E p)
    {
        size = size + 1;
        H->push(p,size);
        shiftUp(size);
    }

// Function to extract the element with
// maximum priority
    E* extractMax()
    {
        E* result = H.get(0);

        // Replace the value at the root
        // with the last leaf
        H.push(H.get(size),0);
        size = size - 1;

        // Shift down the replaced element
        // to maintain the heap property
        shiftDown(0);
        return result;
    }
    E* Max(){
        E* result = H.get(0);

        return result;
    }

// Function to change the priority
// of an element
/*void changePriority(int i, int p)
{
    int oldp = H[i];
    H[i] = p;

    if (p > oldp) {
        shiftUp(i);
    }
    else {
        shiftDown(i);
    }
}*/

// Function to get value of the current
// maximum element
    E* getMax()
    {

        return H.get(0);
    }

// Function to remove the element
// located at given index
    void remove(int i)
    {
        H.push(H.get(0+1),i);

        // Shift the node to the root
        // of the heap
        shiftUp(i);

        // Extract the node
        extractMax();
    }
};

#endif //HEAPPRIORITYQUEUE_HEAPPRIORITYYQUEUE_H

