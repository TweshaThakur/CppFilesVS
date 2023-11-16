#include <iostream>
#include <vector>

class MaxHeap {
private:
    std::vector<int> heap;

    int getParentIndex(int index) {
        return (index - 1) / 2;
    }

    int getLeftChildIndex(int index) {
        return 2 * index + 1;
    }

    int getRightChildIndex(int index) {
        return 2 * index + 2;
    }

    void heapifyUp(int index) {
        while (index > 0 && heap[index] > heap[getParentIndex(index)]) {
            std::swap(heap[index], heap[getParentIndex(index)]);
            index = getParentIndex(index);
        }
    }

    void heapifyDown(int index) {
        int maxIndex = index;
        int leftChildIndex = getLeftChildIndex(index);
        int rightChildIndex = getRightChildIndex(index);

        if (leftChildIndex < heap.size() && heap[leftChildIndex] > heap[maxIndex]) {
            maxIndex = leftChildIndex;
        }

        if (rightChildIndex < heap.size() && heap[rightChildIndex] > heap[maxIndex]) {
            maxIndex = rightChildIndex;
        }

        if (index != maxIndex) {
            std::swap(heap[index], heap[maxIndex]);
            heapifyDown(maxIndex);
        }
    }

public:
    void insert(int value) {
        heap.push_back(value);
        heapifyUp(heap.size() - 1);
    }

    void removeMax() {
        if (heap.empty()) {
            std::cout << "Heap is empty. Cannot perform deletion.\n";
            return;
        }

        std::swap(heap[0], heap[heap.size() - 1]);
        heap.pop_back();
        heapifyDown(0);
    }

    void printHeap() {
        std::cout << "Heap: ";
        for (int value : heap) {
            std::cout << value << " ";
        }
        std::cout << "\n";
    }
};

int main() {
    MaxHeap maxHeap;

    maxHeap.insert(30);
    maxHeap.insert(20);
    maxHeap.insert(10);
    maxHeap.insert(5);
    maxHeap.insert(15);

    std::cout << "Original ";
    maxHeap.printHeap();

    maxHeap.removeMax();
    std::cout << "After deletion: ";
    maxHeap.printHeap();

    return 0;
}
