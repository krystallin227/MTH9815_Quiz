#ifndef MAXHEAP_HPP
#define MAXHEAP_HPP

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
class MaxHeap {
private:
    std::vector<T> heap;

    // maintain the heap property after adding element
    void heapifyUp(int index) {
        while (index > 0 && heap[(index - 1) / 2] < heap[index]) {
            std::swap(heap[index], heap[(index - 1) / 2]);
            index = (index - 1) / 2;
        }
    }

    // maintain the heap property after removing element
    void heapifyDown(int index) {
        int size = heap.size();
        int largest = index;

        int left = 2 * index + 1;
        int right = 2 * index + 2;

        if (left < size && heap[left] > heap[largest])
            largest = left;

        if (right < size && heap[right] > heap[largest])
            largest = right;

        if (largest != index) {
            std::swap(heap[index], heap[largest]);
            heapifyDown(largest);
        }
    }

public:
    void add(T element) {
        heap.push_back(element);
        heapifyUp(heap.size() - 1);
    }

    T remove() {
        if (heap.size() == 0) {
            throw std::runtime_error("Heap is empty");
        }

        T max = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);
        return max;
    }

    // Function to get size of the heap
    size_t size() const {
        return heap.size();
    }
};


#endif // !MAXHEAP_HPP
