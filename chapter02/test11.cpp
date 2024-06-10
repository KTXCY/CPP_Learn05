////
//// Created by mynam on 2024/6/10.
////
//
//#include <iostream>
//
//using namespace std;
//
//#include <cstdlib>
//
//typedef int ElementType; // 假设链表存储的数据类型为整型，可根据实际需求修改
//typedef struct Node {
//    ElementType data;
//    struct Node *next;
//} Node;
//
//// 初始化头节点
//Node *initList() {
//    Node *head = (Node *) malloc(sizeof(Node));
//    if (head == nullptr) {
//        printf("Memory allocation failed\n");
//        exit(0);
//    }
//    head->next = head; // 头节点的next指向自己，形成循环
//    return head;
//}
//
//void insertHead(Node *head, ElementType value) {
//    Node *newNode = (Node *) malloc(sizeof(Node));
//    if (newNode == nullptr) {
//        printf("Memory allocation failed\n");
//        return;
//    }
//    newNode->data = value;
//    newNode->next = head->next; // 新节点的next指向原头节点的下一个节点
//    head->next = newNode; // 头节点的next指向新节点
//}
//
//void insertTail(Node *head, ElementType value) {
//    Node *newNode = (Node *) malloc(sizeof(Node));
//    if (newNode == nullptr) {
//        printf("Memory allocation failed\n");
//        return;
//    }
//    newNode->data = value;
//    newNode->next = head; // 新节点的next指向头节点，形成循环
//    Node *temp = head;
//    while (temp->next != head) { // 遍历到尾部
//        temp = temp->next;
//    }
//    temp->next = newNode; // 尾节点的next指向新节点
//}
//
//void deleteNode(Node *head, ElementType value) {
//    if (head == nullptr) return;
//    Node *temp = head, *prev = nullptr;
//    do {
//        if (temp->data == value) {
//            if (prev == nullptr) { // 如果是头节点
//                head->next = temp->next;
//            } else {
//                prev->next = temp->next;
//            }
//            free(temp);
//            return; // 删除后直接返回，避免重复删除
//        }
//        prev = temp;
//        temp = temp->next;
//    } while (temp != head);
//    printf("Element not found in the list.\n");
//}
//
//Node *searchNode(Node *head, ElementType value) {
//    if (head == nullptr) return nullptr;
//    Node *temp = head;
//    do {
//        if (temp->data == value) {
//            return temp;
//        }
//        temp = temp->next;
//    } while (temp != head);
//    return nullptr;
//}
//
//void printList(Node *head) {
//    if (head == nullptr) return;
//    Node *temp = head->next;
//    do {
//        printf("%d ", temp->data);
//        temp = temp->next;
//    } while (temp != head->next);
//    printf("\n");
//}
//
//void freeList(Node *head) {
//    if (head == nullptr) return;
//    Node *temp = head->next, *nextNode;
//    do {
//        nextNode = temp->next;
//        free(temp);
//        temp = nextNode;
//    } while (temp != head->next);
//}
//
//int main() {
//    Node *head = initList();
//    insertHead(head, 1);
//    insertHead(head, 2);
//    insertHead(head, 3);
//    insertTail(head, 4);
//    insertTail(head, 5);
//    printList(head);
//    deleteNode(head, 3);
//    printList(head);
//    deleteNode(head, 5);
//    printList(head);
//    deleteNode(head, 1);
//    printList(head);
//    deleteNode(head, 4);
//    printList(head);
//    freeList(head);
//    return 0;
//}
