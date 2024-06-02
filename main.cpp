//#include <iostream>
//
//using namespace std;
//
//typedef int ElemType;
//typedef int Status;
//
//#define OK 1
//#define ERROR 0
//
//typedef struct LNode {
//    ElemType data;    // 存储链表节点的数据
//    struct LNode *next;   // 指向下一个链表节点的指针
//} LNode, *LinkList;  // LNode是结构体类型的名字，LinkList是指向该结构体的指针类型的名字
//
//Status InitList_L(LinkList &L) {
//    L = new LNode;
//    L->next = nullptr;
//    return OK;
//}
//
//int ListEmpty(LinkList L) {
//    if (L->next) {
//        return 0;
//    } else {
//        return 1;
//    }
//}
//
//void DestroyList_L(LinkList &L) {
//    LNode *p;
//    while (L) {
//        p = L;
//        L = L->next;
//        delete p;
//    }
//}
//
//Status CLearList_L(LinkList *L) {
//    LNode *p = (*L)->next;
//    LNode *q = nullptr;
//    while (p) {
//        q = p->next;
//        delete p;
//        p = q;
//    }
//    (*L)->next = nullptr;
//    return OK;
//}
//
//int ListLength_L(LinkList L) {
//    LNode *p = L->next;
//    int i = 0;
//    while (p) {
//        i++;
//        p = p->next;
//    }
//    return i;
//}
//
//int main() {
//    LNode *L;
//    LinkList q;
//    InitList_L(q);
////    ListLength_L(L);
//    return 0;
//}
//
//
//#include <iostream>
//
//using namespace std;
//
//typedef int ElemType;
//typedef int Status;
//
//#define OK 1
//#define ERROR 0
//
//typedef struct LNode {
//    ElemType data;    // 存储链表节点的数据
//    struct LNode *next;   // 指向下一个链表节点的指针
//} LNode, *LinkList;  // LNode是结构体类型的名字，LinkList是指向该结构体的指针类型的名字
//
//Status InitList_L(LinkList &L) {
//    L = new LNode;
//    L->next = nullptr;
//    return OK;
//}
//
//int ListEmpty(LinkList L) {
//    if (L->next) {
//        return 0;
//    } else {
//        return 1;
//    }
//}
//
//void DestroyList_L(LinkList &L) {
//    LNode *p;
//    while (L) {
//        p = L;
//        L = L->next;
//        delete p;
//    }
//}
//
//Status CLearList_L(LinkList *L) {
//    LNode *p = (*L)->next;
//    LNode *q = nullptr;
//    while (p) {
//        q = p->next;
//        delete p;
//        p = q;
//    }
//    (*L)->next = nullptr;
//    return OK;
//}
//
//int ListLength_L(LinkList L) {
//    LNode *p = L->next;
//    int i = 0;
//    while (p) {
//        i++;
//        p = p->next;
//    }
//    return i;
//}
//
//int main() {
//    LNode *L;
//    LinkList q;
//    InitList_L(q);
////    ListLength_L(L);
//    return 0;
//}
//
//#include <iostream>
//
//using namespace std;
//
//typedef int ElemType;
//typedef int Status;
//
//#define OK 1
//#define ERROR 0
//
//typedef struct LNode {
//    ElemType data;    // 存储链表节点的数据
//    struct LNode *next;   // 指向下一个链表节点的指针
//} LNode, *LinkList;  // LNode是结构体类型的名字，LinkList是指向该结构体的指针类型的名字
//
//Status InitList_L(LinkList &L) {
//    L = new LNode;
//    L->next = nullptr;
//    return OK;
//}
//
//int ListEmpty(LinkList L) {
//    if (L->next) {
//        return 0;
//    } else {
//        return 1;
//    }
//}
//
//void DestroyList_L(LinkList &L) {
//    LNode *p;
//    while (L) {
//        p = L;
//        L = L->next;
//        delete p;
//    }
//}
//
//Status CLearList_L(LinkList *L) {
//    LNode *p = (*L)->next;
//    LNode *q = nullptr;
//    while (p) {
//        q = p->next;
//        delete p;
//        p = q;
//    }
//    (*L)->next = nullptr;
//    return OK;
//}
//
//int ListLength_L(LinkList L) {
//    LNode *p = L->next;
//    int i = 0;
//    while (p) {
//        i++;
//        p = p->next;
//    }
//    return i;
//}
//
//int main() {
//    LNode *L;
//    LinkList q;
//    InitList_L(q);
////    ListLength_L(L);
//    return 0;
//}
//
//#include <iostream>
//
//using namespace std;
//
//typedef int ElemType;
//typedef int Status;
//
//#define OK 1
//#define ERROR 0
//
//typedef struct LNode {
//    ElemType data;    // 存储链表节点的数据
//    struct LNode *next;   // 指向下一个链表节点的指针
//} LNode, *LinkList;  // LNode是结构体类型的名字，LinkList是指向该结构体的指针类型的名字
//
//Status InitList_L(LinkList &L) {
//    L = new LNode;
//    L->next = nullptr;
//    return OK;
//}
//
//int ListEmpty(LinkList L) {
//    if (L->next) {
//        return 0;
//    } else {
//        return 1;
//    }
//}
//
//void DestroyList_L(LinkList &L) {
//    LNode *p;
//    while (L) {
//        p = L;
//        L = L->next;
//        delete p;
//    }
//}
//
//Status CLearList_L(LinkList *L) {
//    LNode *p = (*L)->next;
//    LNode *q = nullptr;
//    while (p) {
//        q = p->next;
//        delete p;
//        p = q;
//    }
//    (*L)->next = nullptr;
//    return OK;
//}
//
//int ListLength_L(LinkList L) {
//    LNode *p = L->next;
//    int i = 0;
//    while (p) {
//        i++;
//        p = p->next;
//    }
//    return i;
//}
//
//int main() {
//    LNode *L;
//    LinkList q;
//    InitList_L(q);
////    ListLength_L(L);
//    return 0;
//}

//struct ListNode {
//    int data;        // 节点数据
//    ListNode* next;  // 指向下一个节点的指针
//
//    ListNode(int x) : data(x), next(nullptr) {}  // 构造函数
//};
//
//class LinkedList {
//private:
//    ListNode* head;  // 头结点
//
//public:
//    // 构造函数
//    LinkedList() : head(new ListNode(0)) {}
//
//    // 析构函数，用于释放内存
//    ~LinkedList() {
//        ListNode* temp = head;
//        while (temp) {
//            ListNode* to_delete = temp;
//            temp = temp->next;
//            delete to_delete;
//        }
//    }
//
//    // 插入节点到链表尾部
//    void append(int value) {
//        ListNode* new_node = new ListNode(value);
//        if (head->next == nullptr) {
//            head->next = new_node;
//        } else {
//            ListNode* current = head;
//            while (current->next != nullptr) {
//                current = current->next;
//            }
//            current->next = new_node;
//        }
//    }
//
//    // 打印链表
//    void printList() {
//        ListNode* temp = head->next;
//        while (temp) {
//            std::cout << temp->data << " ";
//            temp = temp->next;
//        }
//        std::cout << std::endl;
//    }
//};

