#include "Quicksort.hpp"
#include "MaxHeap.hpp"

int main() 
{   
    //Exercise 1 - testing quick sort on integer arrays
    std::vector<int> arr = { 64, 34, 25, 12, 22, 11, 90 };
    std::cout << "Exercise 1, Sorted array: \n";
    quickSort(arr, 0, arr.size() - 1);
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n\n";


    //Exercise 2 - add elements to a max heap of integers
    MaxHeap<int> maxHeap;
    maxHeap.add(3);
    maxHeap.add(10);
    maxHeap.add(5);
    maxHeap.add(1);
    maxHeap.add(4);
    maxHeap.add(8);
    maxHeap.add(30);


    //Exercise 3 - remove the max element from the heap 
    std::cout << "Exercise 2 and 3,Max heap elements one by one:" << std::endl;

    while (maxHeap.size() > 0) 
    {
        std::cout << maxHeap.remove() << " ";
    }


}