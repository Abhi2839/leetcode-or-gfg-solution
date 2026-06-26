class Node {
public:
    Node* next;
    int val;
    Node(int data) {
        val = data;
        next = nullptr;
    }
};

class MyLinkedList {
public:
    Node* head;
    int len;
    MyLinkedList() {
        head = nullptr;
        len = 0;
    }
   int get(int idx) {
        if (idx < 0 || idx >= len)
            return -1;

        Node* temp = head;

        for (int i = 0; i < idx; i++)
            temp = temp->next;

        return temp->val;
    }

    void addAtHead(int val) {
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        len++;
    }

    void addAtTail(int val) {
        Node* temp = new Node(val);
        Node* curr = head;
        if (head == nullptr)
            head = temp;
        else {
            while (curr->next) {
                curr = curr->next;
            }
            curr->next = temp;
        }
        len++;
    }
    void addAtIndex(int idx, int val) {
        if (0 > idx or idx > len)
            return;
        if (idx == 0) {
            addAtHead(val);
            return;
        }
        Node* temp = head;
        for (int i = 0; idx-1 > i; i++) {
            temp = temp->next;
        }
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
        len++;
    }

    void deleteAtIndex(int idx) {
        if (idx < 0 || idx >= len)
            return;

        if (idx == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            len--;
            return;
        }

 Node* curr = head;

        for (int i = 0; i < idx - 1; i++) {
            curr = curr->next;
        }
        Node* del = curr->next;        curr->next = del->next;
        delete del;
 len--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(idx);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtidx(idx,val);
 * obj->deleteAtidx(idx);
 */