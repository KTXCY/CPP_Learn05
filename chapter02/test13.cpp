//
// Created by mynam on 2024/6/10.
//
//
//#include <iostream>
//
//using namespace std;
//
//#include <cstdlib>
//
//typedef int ElemType;
//
//typedef struct LNode {
//    ElemType data;
//    struct LNode *next;
//} LNode, *LinkList;
//
//bool InitList(LinkList *L) {
//    LNode *p = (LNode *) malloc(sizeof(LNode));
//    if (p == nullptr) {
//        return false;
//    }
//    (*L) = p;
//    (*L)->data = 0;
//    (*L)->next = (*L);
//    return true;
//}
//
//bool InsertList(LinkList *L, int i, ElemType e) {
//    if (i < 1) {
//        return false;
//    }
//    LNode *p = (*L);
//    int j = 0;
//    while (p != (*L) && j < i - 1) {
//        p = p->next;
//        j++;
//    }
//    if (j > i - 1) {
//        return false;
//    }
//    LNode *s = (LNode *) malloc(sizeof(LNode));
//    if (s == nullptr) {
//        return false;
//    }
//    s->data = e;
//    s->next = p->next;
//    p->next = s;
//    return true;
//}
//
//int main() {
//    LNode *L;
//    InitList(&L);
//    InsertList(&L, 1, 1);
//    InsertList(&L, 1, 2);
//    InsertList(&L, 3, 3);
//    return 0;
//}

//#include <iostream>
//#include <cstdlib>
//#include <memory> // 用于智能指针
//
//using namespace std;
//
//typedef int ElemType;
//
//// 使用智能指针管理链表节点
//struct LNode {
//    ElemType data;
//    std::shared_ptr<LNode> next;
//
//    LNode(ElemType e) : data(e), next(nullptr) {} // 构造函数初始化next为nullptr
//};
//
//// LinkList定义为指向LNode的智能指针
//typedef std::shared_ptr<LNode> LinkList;
//
//// 初始化链表，返回一个空的链表
//bool InitList(LinkList *L) {
//    *L = make_shared<LNode>(ElemType()); // 使用make_shared创建节点
//    (*L)->next = *L; // 将头节点的next指向自身，形成空链表
//    return true;
//}
//
//// 在第i个位置插入元素e，1-based索引
//bool InsertList(LinkList *L, int i, ElemType e) {
//    if (i < 1) {
//        return false;
//    }
//    auto p = *L; // 使用auto简化类型声明
//    int j = 0;
//    while (p->next != *L && j < i - 1) {
//        p = p->next;
//        j++;
//    }
//    // 修改条件判断，允许在链表末尾插入
//    if (j >= i) {
//        return false;
//    }
//
//    auto s = make_shared<LNode>(e); // 使用make_shared创建新节点
//    s->next = p->next;
//    p->next = s;
//    return true;
//}
//
//
//int main() {
//    LinkList L;
//    InitList(&L);
//    InsertList(&L, 1, 1);
//    InsertList(&L, 1, 1);
//    InsertList(&L, 1, 1);
//    return 0;
//}

#include <iostream>

using namespace std;

#include <cstdlib>

typedef int ElemType;

typedef struct LNode {
    ElemType data;
    struct LNode *next;
} LNode, *LinkList;

bool InitCirList(LinkList *L) {
    auto *head = (LNode *) malloc(sizeof(LNode));
    if (head == nullptr) {
        perror("Memory allocation failed for head");
        return false;
    }
    (*L) = head;
    (*L)->data = 0;
    (*L)->next = (*L);
    return true;
}

void DestroyCirList(LinkList *L) {
    LNode *p = (*L)->next;
    while (p != (*L)) {
        LNode *q = p;
        p = p->next;
        free(q);
    }
    free(*L);
}

bool insertAt(LinkList *head, int i, ElemType val) {
    if (!(*head)) {
        perror("Head is NULL");
        return false;
    }
    if (i < 1) {
        cout << "Invalid position: " << i << endl;
        return false;
    }
    auto *NewNode = (LNode *) malloc(sizeof(LNode));
    if (!NewNode) {
        perror("Memory allocation failed for new node");
        return false;
    }
    NewNode->data = val;
    LNode *temp = (*head);
    int j = 0;
    while (temp->next != (*head) && j < i - 1) {
        temp = temp->next;
        j++;
    }
    if (j >= i - 1) {
        NewNode->next = temp->next;
        temp->next = NewNode;
        return true;
    } else {
        cout << "fail " << endl;
        free(NewNode);
        return false;
    }
}

int main() {
    LNode *L;
    InitCirList(&L);
    insertAt(&L, 1, 2);
    insertAt(&L, 0, 89);
    DestroyCirList(&L);
    L = nullptr;
    return 0;
}

