#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int score;
    Student* next;
};

// 在链表尾部插入节点
void insert(Student*& head, string name, int score) {
    Student* newStudent = new Student;
    newStudent->name = name;
    newStudent->score = score;
    newStudent->next = nullptr;

    if (head == nullptr) {
        head = newStudent;
    } else {
        Student* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newStudent;
    }
}

// 删除成绩低于60分的节点
void deleteBelow60(Student*& head) {
    while (head != nullptr && head->score < 60) {
        Student* temp = head;
        head = head->next;
        delete temp;
    }

    if (head != nullptr) {
        Student* current = head;
        while (current->next != nullptr) {
            if (current->next->score < 60) {
                Student* temp = current->next;
                current->next = current->next->next;
                delete temp;
            } else {
                current = current->next;
            }
        }
    }
}

// 打印链表中的学生信息
void printList(Student* head) {
    Student* current = head;
    while (current != nullptr) {
        cout << current->name << " "<< current->score << endl;
        current = current->next;
    }
}

int main() {
    int n;
    cin >> n;

    Student* head = nullptr;

    for (int i = 0; i < n; ++i) {
        string name;
        int score;
        cin >> name >> score;
        insert(head, name, score);
    }

    cout << "\nOriginal student list:" << endl;
    printList(head);

    // 删除成绩低于60分的学生节点
    deleteBelow60(head);

    printList(head);

    // 释放链表内存
    Student* current = head;
    while (current != nullptr) {
        Student* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
