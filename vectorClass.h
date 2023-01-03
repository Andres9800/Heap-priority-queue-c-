
#ifndef HEAPPRIORITYQUEUE_VECTORCLASS_H
#define HEAPPRIORITYQUEUE_VECTORCLASS_H
#include <iostream>
#include <sstream>
using namespace std;

template <typename T>
class vectorClass{
    T* arr;
    int capacity;
    int current;
public:
    vectorClass(){
        arr = new T[1];
        capacity = 1;
        current = 0;
    }
    void push(T data){
        if (current == capacity) {
            T* temp = new T[2 * capacity];

            // copying old array elements to new array
            for (int i = 0; i < capacity; i++) {
                temp[i] = arr[i];
            }
            // deleting previous array
            delete[] arr;
            capacity *= 2;
            arr = temp;
        }
        arr[current] = data;
        current++;
    }
    // function to add element at any index
    void push(T data, int index){
        if (index == capacity)
            push(data);
        else
            arr[index] = data;
    }
    T get(int index){
        if (index < current)
            return arr[index];
    }
    void pop() { current--; }
    int size() { return current; }
    int getcapacity() { return capacity; }
    string print(){
        stringstream ss;
        for (int i = 0; i < current; i++) {
            ss << arr[i].toString()<< " ";
        }
        return ss.str();
    }
};



#endif //HEAPPRIORITYQUEUE_VECTORCLASS_H
