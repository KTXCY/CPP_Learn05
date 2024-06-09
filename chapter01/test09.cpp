////
//// Created by mynam on 2024/6/9.
////
//
////#include <iostream>
////using namespace std;
////
////int main(){
////    string c;
////    cin >> c;
////    cout << c << endl;
////    return 0;
////}
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
//        perror("Initialization fail!!!");
//        return false;
//    }
//    (*L) = p;
//    (*L)->data = 0;
//    (*L)->next = nullptr;
//    return true;
//}
//
//void DestroyList(LinkList *L) {
//    while ((*L)) {
//        LNode *p = (*L);
//        (*L) = (*L)->next;
//        free(p);
//    }
//    (*L) = nullptr;
//}
//
//bool InsertList(LinkList *L, int i, ElemType val) {
//    if (L == nullptr) {
//        return false;
//    }
//    LNode *p = (*L);
//    int j = 0;
//    while (p && j < i - 1) {
//        p = p->next;
//        j++;
//    }
//    if ((!p) || (j > i - 1)) {
//        return false;
//    }
//    LNode *NewNode = (LNode *) malloc(sizeof(LNode));
//    if (NewNode == nullptr) {
//        perror("malloc fail!!!");
//        return false;
//    }
//    NewNode->data = val;
//    NewNode->next = p->next;
//    p->next = NewNode;
//    return true;
//}
//
//void PrintList(LinkList L) {
//    LNode *p = L->next;
//    while (p) {
//        cout << p->data << " ";
//        p = p->next;
//    }
//    cout << "\n";
//}
//
//int main() {
//    LNode *L;
//    InitList(&L);
//    InsertList(&L, 1, 8);
//    InsertList(&L, 1, 78);
//    PrintList(L);
//    DestroyList(&L);
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

bool InitList(LinkList *L) {
    LNode *p = (LNode *) malloc(sizeof(LNode));
    if (p == nullptr) {
        perror("Initialization fail!!!");
        return false;
    }
    (*L) = p;
    (*L)->data = 0;
    (*L)->next = nullptr;
    return true;
}

void DestroyList(LinkList *L) {
    while ((*L)) {
        LNode *p = (*L);
        (*L) = (*L)->next;
        free(p);
    }
    (*L) = nullptr;
}

bool InsertList(LinkList *L, int i, ElemType val) {
    if (L == nullptr) {
        return false;
    }
    LNode *p = (*L);
    int j = 0;
    while (p && j < i - 1) {
        p = p->next;
        j++;
    }
    if ((!p) || j > i - 1) {
        return false;
    }
    LNode *NewNode = (LNode *) malloc(sizeof(LNode));
    if (NewNode == nullptr) {
        perror("malloc fail!!!");
        return false;
    }
    NewNode->data = val;
    NewNode->next = p->next;
    p->next = NewNode;
    return true;
}

bool EmptyList(LinkList *L) {
    if ((*L)->next == nullptr) {
        return true;
    } else {
        return false;
    }
}

int LengthList(LinkList L) {
    if (EmptyList(&L)) {
        return 0;
    }
    LNode *p = L->next;
    int count = 0;
    while (p) {
        p = p->next;
        count = count + 1;
    }
    return count;
}


bool DeleteList(LinkList *L, int i) {
    if (EmptyList(L)) {
        perror("LinkList is Empty, Delete fail");
        return false;
    }
    LNode *p = (*L);
    int j = 0;
    while ((p->next) && j < i - 1) {
        p = p->next;
        j++;
    }
    while (!(p->next) || j > i - 1) {
        return false;
    }
    LNode *q = p->next;
    p->next = q->next;
    free(q);
    return true;
}

bool PrintList(LinkList L) {
    if (EmptyList(&L)) {
        perror("Print fail LinkList is Empty");
        return false;
    }
    LNode *p = L->next;
    while (p) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << "\n";
    return true;
}

int main() {
    LNode *L;
    InitList(&L);
    InsertList(&L, 1, 8);
    InsertList(&L, 1, 78);
    InsertList(&L, 3, 6);
    PrintList(L);
    DeleteList(&L,2);
    PrintList(L);
    DestroyList(&L);
    return 0;
}