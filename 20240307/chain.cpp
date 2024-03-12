#include <iostream>
const int line = 60;
// 定义链表节点
struct Node {
    int data;
    Node* next;
};

// 在链表末尾插入节点
void append(Node*& head, int value) {
    Node* newNode = new Node{value, nullptr};
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// 读取链表
void print(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        if(current->data > line){
            std::cout << current->data << " ";
            current = current->next;
        }
    }
}

void delchain(Node* head){
    Node* temp = head;
    head = head->next;
    delete temp;
}

// 释放链表内存
void clear(Node*& head) {
    while (head != nullptr) {
        delchain(head);
    }
}

int main() {
    freopen("chain.in", "r", stdin);
    freopen("chain.out", "w", stdout);
    Node* head = nullptr;

    append(head, 1);
    append(head, 2);
    append(head, 3);
    append(head, 4);

    std::cout << "Linked List: ";
    print(head);

    // 释放链表内存
    clear(head);
    fclose(stdin);
    fclose(stdout);
    return 0;
}
