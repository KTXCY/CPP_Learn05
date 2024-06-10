//////
////// Created by mynam on 2024/6/10.
//////
////
////#include <iostream>
////
////using namespace std;
////
////#include <cstdlib>
////
////#define OK 1
////#define ERROR 0
////typedef int ElemType;
////typedef int ElemType;
////typedef int Status;
///////c++
//////#include <iostream>
//////#include <cstdlib> // For malloc and free
//////#include <cerrno>  // For perror
////using namespace std;
////
////typedef struct LNode {
////    ElemType data;
////    struct LNode *next;
////} LNode, *LinkList;
////
////// 假设 Status 已经定义为 int 类型
////// #define OK 1
////// #define ERROR 0
////
////// 初始化链表
////Status InitList(LinkList *L) {
////    LNode *head = (LNode *) malloc(sizeof(LNode));
////    if (head == nullptr) {
////        perror("Memory allocation failed");
////        return ERROR;
////    }
////
////    (*L) = head;
////    (*L)->data = 0;
////    (*L)->next = (*L);
////    return OK;
////}
////
////// 循环单链表，在第 i 个位置插入一个值为 x 的节点
////bool InsertList(LinkList *L, int i, ElemType val) {
////    if (i < 1) return false; // 验证位置 i 的有效性
////
////    LNode *p = (*L);
////    int j = 0;
////    while (p != (*L) && j < i - 1) {
////        p = p->next;
////        j++;
////    }
////    if (p == (*L) || j > i - 1) {
////        return false;
////    }
////
////    LNode *newNode = (LNode *) malloc(sizeof(LNode));
////    if (newNode == nullptr) {
////        perror("Memory allocation failed");
////        return false;
////    }
////    newNode->data = val;
////    newNode->next = p->next;
////    p->next = newNode;
////
////    return true;
////}
////
////void PrintList(LinkList L) {
////    LNode *p = L->next;
////    while (p != L) {
////        cout << p->data << " ";
////        p = p->next;
////    }
////    cout << endl;
////}
////
////void DestroyList(LinkList *L) {
////    if ((*L) == nullptr) {
////        return;
////    }
////    LNode *p = (*L)->next;
////    while (p != (*L)) {
////        LNode *temp = p;
////        p = p->next;
////        free(temp);
////    }
////    free((*L));
////}
////
////// 删除链表中第 i 个位置的节点，并返回被删除节点的数据
////bool DeleteList(LinkList *L, int i, ElemType *e) {
////    if (i < 1 || (*L) == nullptr) return false; // 验证位置 i 的有效性及链表是否为空
////
////    LNode *p = (*L);
////    int j = 0;
////    while (p->next != (*L) && j < i - 1) {
////        p = p->next;
////        j++;
////    }
////    if (p->next == (*L) || j != i - 1) {
////        return false;
////    }
////
////    LNode *temp = p->next;
////    *e = temp->data;
////    p->next = temp->next;
////    free(temp);
////    return true;
////}
////
////
////int main() {
////    LNode *L;
////    InitList(&L);
////    InsertList(&L, 1, 1);
////    InsertList(&L, 1, 2);
////    InsertList(&L, 1, 3);
////    InsertList(&L, 1, 4);
////    InsertList(&L, 1, 5);
////    InsertList(&L, 1, 6);
////    InsertList(&L, 1, 7);
////    InsertList(&L, 1, 8);
////    PrintList(L);
////    int a = 0;
////    DeleteList(&L, 3, &a);
////    cout << a << endl;
////    DestroyList(&L);
////    L = nullptr;
////    return 0;
////}
/////c++
//
////#include <stdio.h>
////#include <stdlib.h>
////
////// 定义链表节点结构体
////typedef struct Node {
////    int data;
////    struct Node *next;
////} Node;
////
////// 初始化循环单链表
////Node *initList() {
////    Node *head = (Node *) malloc(sizeof(Node));
////    if (!head) {
////        // 内存申请失败处理
////        perror("Failed to allocate memory for head node");
////        exit(EXIT_FAILURE);
////    }
////    head->data = 0;
////    head->next = head;  // 初始化为空循环链表
////    return head;
////
////
////}
////
////// 在第i个位置插入元素
////// 注意：i从1开始计数，若i小于1或大于链表长度+1，则不插入
////void insertNode(Node *head, int i, int value) {
////    if (i < 1) {
////        return;
////    }
////    Node *current = head;
////    int pos = 0;
////    // 找到第i-1个节点
////    while (current->next != head && pos < i - 1) {
////        current = current->next;
////        pos++;
////    }
////    // 如果i大于链表长度+1，则不插入
////    if (pos != i - 1) {
////        return;
////    }
////    // 插入新节点
////    Node *newNode = (Node *) malloc(sizeof(Node));
////    if (!newNode) {
////        perror("Failed to allocate memory for new node");
////        exit(EXIT_FAILURE); // 异常处理，可根据实际情况调整
////    }
////    newNode->data = value;
////    newNode->next = current->next;
////    current->next = newNode;
//////     如果是在末尾插入，则需要将新节点的next指向头节点，形成循环
//////    if (current->next->next == head) {
//////        ne->-
//////    }
////}
////
////// 遍历并打印链表
////void printList(Node *head) {
////    if (head == NULL) {
////        return;
////    }
////    Node *current = head->next;
////    while (current != head) {
////        printf("%d ", current->data);
////        current = current->next;
////    }
////    printf("\n");
////}
////
////int main() {
////    Node *head = initList();
////    insertNode(head, 1, 10);
////    insertNode(head, 2, 20);
////    insertNode(head, 1, 15);
////    insertNode(head, 4, 30);
////    printList(head);  // 输出: 10 20 30
////
////    insertNode(head, 4, 40);  // 在末尾插入
////    printList(head);  // 输出: 10 20 30 40
////
////    insertNode(head, 2, 15);  // 在中间插入
////    printList(head);  // 输出: 10 15 20 30 40
////
////    return 0;
////}
//
//
////#include <iostream>
////
////using namespace std;
////
////#include <cstdlib>
////
////#define OK 1
////#define ERROR 0
////
////typedef int ElemType;
////
////typedef struct LNode {
////    ElemType data;
////    struct LNode *next;
////} LNode, *LinkList;
////
////int InitList(LinkList *L) {
////    LNode *p = (LNode *) malloc(sizeof(LNode));
////    if (p == nullptr) {
////        cout << "Initialization Error" << endl;
////        return ERROR;
////    }
////    (*L) = p;
////    (*L)->data = 0;
////    (*L)->next = (*L);
////    return OK;
////}
////
////void DestroyList(LinkList *L) {
////    LNode *p = (*L)->next;
////    while (p != (*L)) {
////        LNode *q = p;
////        p = p->next;
////        free(q);
////    }
////    free(*L);
////}
////
////bool InsertList(LinkList *L, int i, ElemType val) {
////    if (i < 1) {
////        return false;
////    }
////    LNode *p = (*L);
////    int j = 0;
////    while (p->next != (*L) && j < i - 1) {
////        p = p->next;
////        j++;
////    }
////    if (j > i - 1) {
////        return false;
////    }
////    LNode *NewNode = (LNode *) malloc(sizeof(LNode));
////    if (NewNode == nullptr) {
////        return false;
////    }
////    NewNode->data = val;
////    NewNode->next = p->next;
////    p->next = NewNode;
////    return true;
////}
////
////int main() {
////    LNode *L;
////    InitList(&L);
//////    cout << "Hello, Wrold" << endl;
////    InsertList(&L,1,67);
////    DestroyList(&L);
////    return 0;
////}
//
//
////#include <iostream>
////
////using namespace std;
////
////#include <cstdlib>
////
////#define OK 1
////#define ERROR 0
////
////typedef int ElemType;
////
////typedef struct LNode {
////    ElemType data;
////    struct LNode *next;
////} LNode, *LinkList;
////
////int InitList(LinkList *L) {
////    LNode *p = (LNode *) malloc(sizeof(LNode));
////    if (p == nullptr) {
////        cout << "Initialization Error" << endl;
////        return ERROR;
////    }
////    (*L) = p;
////    (*L)->data = 0;
////    (*L)->next = (*L);
////    return OK;
////}
////
////void DestroyList(LinkList *L) {
////    LNode *p = (*L)->next;
////    while (p != (*L)) {
////        LNode *q = p;
////        p = p->next;
////        free(q);
////    }
////    free(*L);
////}
////
////bool InsertList(LinkList *L, int i, ElemType val) {
////    if (i < 1) {
////        return false;
////    }
////    LNode *p = (*L);
////    int j = 0;
////    while (p->next != (*L) && j < i - 1) {
////        p = p->next;
////        j++;
////    }
////    if (j > i - 1) {
////        return false;
////    }
////    LNode *NewNode = (LNode *) malloc(sizeof(LNode));
////    if (NewNode == nullptr) {
////        return false;
////    }
////    NewNode->data = val;
////    NewNode->next = p->next;
////    p->next = NewNode;
////    if (p->next->next == (*L)) {
////        NewNode->next = (*L);
////    }
////    return true;
////
////}
////
////int main() {
////    LNode *L;
////    InitList(&L);
////    InsertList(&L, 1, 2);
////    InsertList(&L, 2, 3);
////    DestroyList(&L);
////    L = nullptr;
////    return 0;
////}
//
//#include <stdio.h>
//#include <stdlib.h>
//
//// 定义链表节点结构体
//typedef struct Node {
//    int data;
//    struct Node *next;
//} Node;
//
//// 创建新节点
//Node *createNode(int data) {
//    Node *newNode = (Node *) malloc(sizeof(Node));
//    if (!newNode) {
//        perror("Memory allocation failed");
//        exit(EXIT_FAILURE);
//    }
//    newNode->data = data;
//    newNode->next = newNode; // 初始化为循环链表
//    return newNode;
//}
//
//// 在第i个位置插入元素（索引从1开始）
//void insertAt(Node **head, int index, int data) {
//    if (index <= 0) {
//        printf("Invalid index\n");
//        return;
//    }
//
//    Node *newNode = createNode(data);
//    if (*head == NULL) { // 链表为空
//        *head = newNode;
//        return;
//    }
//
//    Node *current = *head;
//    int position = 1;
//
//    // 找到第index-1个节点
//    while (position < index - 1 && current->next != *head) { // 注意循环条件
//        current = current->next;
//        position++;
//    }
//
//    // 插入新节点
//    newNode->next = current->next;
//    current->next = newNode;
//
//    // 如果是在尾部插入，需要将新节点的next指向头节点
//    if (position == index - 1 && current->next == *head) {
//        newNode->next = *head;
//    }
//}
//
//// 显示链表
//void display(Node *head) {
//    if (head == NULL) {
//        printf("List is empty\n");
//        return;
//    }
//    Node *current = head;
//    do {
//        printf("%d ", current->data);
//        current = current->next;
//    } while (current != head); // 循环直到回到头节点
//    printf("\n");
//}
//
//// 清理链表内存
//void cleanup(Node *head) {
//    if (head == NULL) return;
//    Node *current = head;
//    Node *temp;
//    do {
//        temp = current;
//        current = current->next;
//        free(temp);
//    } while (current != head); // 循环直到回到头节点
//    (head) = NULL; // 将头指针置为NULL
//}
//
//int main() {
//    Node *head = NULL;
//
//    // 插入元素
//    insertAt(&head, 1, 10);
//    insertAt(&head, 2, 20);
//    insertAt(&head, 3, 30);
//    insertAt(&head, 1, 5);  // 在第1个位置插入新元素
//
//    // 显示链表
//    display(head);
//
//    // 清理链表内存
//    cleanup(head);
//
//    return 0;
//}