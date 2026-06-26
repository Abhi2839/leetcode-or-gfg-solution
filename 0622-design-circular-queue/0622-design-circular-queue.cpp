class MyCircularQueue {
public:
    int size, cap;
    vector<int> arr;
    int r = 0, f = 0; // rear front

    MyCircularQueue(int k) {
        arr.resize(k);
        f = 0, r = 0, cap = k, size = 0;
    }

    bool enQueue(int value) {
        if (size == cap)
            return false;
        arr[r] = value;
        r++;
        size++;
        r = r % cap;
        return true;
    }

    bool deQueue() {
        if (size==0) return false;
     f++;
        size--;
    f=f%cap;
    return true;
    }

    int Front() {
        if (size==0) return -1;
        return arr[f];
    }

    int Rear() {
        if (size==0) return -1;
        if (r==0) return arr[cap-1];
        return arr[r-1];
    }

    bool isEmpty() {
        return size==0;
    }

    bool isFull() {
        return size==cap;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */