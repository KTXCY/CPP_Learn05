////
//// Created by mynam on 2024/6/3.
////
//
//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//
//typedef int ElemType;
//
//typedef struct LNode {
//    ElemType data;
//    struct LNode *next;
//} LNode, *LinkList;
//
//void InitList_L(LinkList *L) {
//    *L = (LNode *) malloc(sizeof(LNode));
//    (*L)->next = nullptr;
//    (*L)->data = 0;
//}
//
//void DestroyList_L(LinkList *L) {
//    LNode *p;
//    LNode *q = *L;
//    while (q) {
//        p = q;
//        q = q->next;
//        free(p);
//    }
//}
//
//bool ListInsert_L(LinkList *L, int i, ElemType val) {
//    LNode *p = *L;
//    int j = 0;
//    while (p && j < i - 1) {
//        p = p->next;
//        j++;
//    }
//    if (!p || j > i - 1) {
//        return false;
//    }
//    LNode *s = (LNode *) malloc(sizeof(LNode));
//    s->data = val;
//    s->next = p->next;
//    p->next = s;
//    return true;
//}
//
//bool DeleteList(LinkList *L, int i) {
//    LNode *p = (*L);
//    int j = 0;
//    while (p->next && j < i - 1) {
//        p = p->next;
//        j++;
//    }
//    if (!(p->next) || j > i - 1) {
//        return false;
//    }
//    LNode *q = p->next;
//    p->next = q->next;
//    free(q);
//    return true;
//}
//
//void PrintList_L(LinkList L) {
//    LNode *p = L->next;
//    while (p) {
//        cout << p->data << " ";
//        p = p->next;
//    }
//    cout << endl;
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
//void ClearList_L(LinkList L) {
//    LNode *p = L->next;
//    LNode *q = nullptr;
//    while (p) {
//        q = p->next;
//        delete p;
//        p = q;
//    }
//    L->next = nullptr;
//}
//
//int ListLength_L(LinkList L) {
//    LNode *p = L;
//    p = p->next;
//    int i = 0;
//    while (p) {
//        i++;
//        p = p->next;
//    }
//    return i;
//}
//
//
//bool GetElem_L(LinkList L, int i, ElemType *e) {
//    LNode *p = L->next;
//    int j = 1;
//    while (p && j < i) {
//        p = p->next;
//        j++;
//    }
//    if (!p || j > i) {
//        return false;
//    }
//    (*e) = p->data;
//    return true;
//}
//
////LNode *LocateElem_L(LinkList L, ElemType e) {
////    LNode *p = L->next;
////    while (p && p->data != e) {
////        p = p->next;
////    }
////    return p;
////}
//
//int LocateELem_L(LinkList L, ElemType e) {
//    LNode *p = L->next;
//    int j = 1;
//    while (p && p->data != e) {
//        p = p->next;
//        j++;
//    }
//    if (p) {
//        return j;
//    } else {
//        return 0;
//    }
//}
//
//int main() {
//    LNode *L;
//    InitList_L(&L);
//    ListInsert_L(&L, 1, 9);
//    ListInsert_L(&L, 1, 2);
//    ListInsert_L(&L, 1, 3);
//    ListInsert_L(&L, 1, 4);
//    ListInsert_L(&L, 1, 5);
//    ListInsert_L(&L, 1, 6);
//    ListInsert_L(&L, 1, 97);
//    PrintList_L(L);
//    int a = LocateELem_L(L,3);
//    cout << a << endl;
//    DestroyList_L(&L);
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//typedef int ElemType;
//
//typedef struct LNode {
//    ElemType data;
//    struct LNode *next;
//} LNode, *LinkList;
//
////单链表的初始化
//
//void InitLinKList(LinkList *L) {
//    LNode *p = (LNode *) malloc(sizeof(LNode));
//voi
//    (*L) = p;
//    (*L)->data = 0;
//    (*L)->next = nullptr;
//}
//
//
//int main() {
//
//    return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//typedef int ElemType;
//
//typedef struct LNode {
//    ElemType data;
//    struct LNode *next;
//} LNode, *LinkList;
//
////单链表的初始化
//
//bool InitLinkList(LinkList *L) {
//    LNode *p = (LNode *) malloc(sizeof(LNode));
//    if (p == nullptr) {
//        return false;
//    }
//    (*L) = p;
//    (*L)->data = 0;
//    (*L)->next = nullptr;
//    return true;
//}
//
////销毁单链表
////void DestroyLinkList(LinkList *L){
////    LNode *p;
////    while(*L){
////        p = (*L);
////        p = p->next;
////        free(p);
////    }
////}
//
//void DestroyLinkList1(LinkList *L) {
//    LNode *p;
//    LNode *q = (*L);
//    while (q) {
//        p = q;
//        p = p->next;
//        free(p);
//    }
//}
//
////销毁单链表
//void DestroyLinkList2(LinkList *L) {
//    LNode *p = (*L);
//    LNode *q = nullptr;
//    while (p) {
//        q = p;
//        p = p->next;
//        free(q);
//    }
//}
//
//
//
////单链表的插入
//
//bool InsertLinkList(LinkList *L, int i, ElemType val) {
//    if (L == nullptr) {
//        return false;
//    }
//    LNode *p = (*L);
//    int j = 0;
//    while (p && j < i - 1) {
//        p = p->next;
//        j++;
//    }
//    if ((!p) || j > i - 1) {
//        return false;
//    }
//    LNode *NewNode = (LNode *) malloc(sizeof(LNode));
//    if (NewNode == nullptr) {
//        cout << "malloc fail" << endl;
//        return false;
//    }
//
//    NewNode->data = val;
//    NewNode->next = p->next;
//    p->next = NewNode;
//    return true;
//}
//
//bool ListEmpty(LinkList L) {
//    if (L->next) {
//        return false;
//    } else {
//        return true;
//    }
//}
//
//bool Print(LinkList L) {
//    if (ListEmpty(L)) {
//        return false;
//    }
//    LNode *p = L->next;
//    while (p) {
//        cout << p->data << endl;
//        p = p->next;
//    }
//    cout << "\n";
//    return true;
//}
//
//int main() {
//    LNode *L;
//    InitLinkList(&L);
//    InsertLinkList(&L, 1, 89);
//    Print(L);
//    DestroyLinkList(&L);
//    return 0;
//}
