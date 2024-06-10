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
////typedef int ElemType;
////
////typedef struct LNode {
////    ElemType data;
////    struct LNode *next;
////} LNode, *LinkList;
////
////bool InitLinkList(LinkList *L) {
////    LNode *p = (LNode *) malloc(sizeof(LNode));
////    if (p == nullptr) {
////        cout << "Initialization fail" << endl;
////        return false;
////    }
////    (*L) = p;
////    (*L)->data = 0;
////    (*L)->next = nullptr;
////    return true;
////}
////
////void DestroyList(LinkList *L) {
////    LNode *p = nullptr;
////    while ((*L)) {
////        p = (*L);
////        (*L) = (*L)->next;
////        free(p);
////    }
////}
////
////bool EmptyList(LinkList L) {
////    LNode *p = L;
////    if (p->next == nullptr) {
////        return true;
////    } else {
////        return false;
////    }
////}
////
////bool InsertList(LinkList *L, int i, ElemType val) {
////    if (L == nullptr) {
////        return false;
////    }
////    LNode *p = (*L);
////    int j = 0;
////    while (p && j < i - 1) {
////        p = p->next;
////        j++;
////    }
////    if (!(p) || j > i - 1) {
////        return false;
////    }
////    LNode *NewLNode = (LNode *) malloc(sizeof(LNode));
////    if (NewLNode == nullptr) {
////        perror("malloc fail");
////        return false;
////    }
////    NewLNode->data = val;
////    NewLNode->next = p->next;
////    p->next = NewLNode;
////    return true;
////}
////
////bool PrintList(LinkList L) {
////    if (EmptyList(L)) {
////        perror("Print fail, LinkList is fail");
////        return false;
////    }
////    LNode *p = L->next;
////    while (p) {
////        cout << p->data << " ";
////        p = p->next;
////    }
////    cout << "\n";
////    return true;
////}
////
////int LengthList(LinkList L) {
////    if (EmptyList(L)) {
////        return 0;
////    }
////    LNode *p = L->next;
////    int count = 0;
////    while (p) {
////        count = count + 1;
////        p = p->next;
////    }
////    return count;
////}
////
////bool DeleteList(LinkList *L, int i) {
////    if (L == nullptr) {
////        return false;
////    }
////    if (EmptyList(*L)) {
////        return false;
////    }
////    LNode *p = (*L);
////    int j = 0;
////    while (p->next && j < i - 1) {
////        p = p->next;
////        j++;
////    }
////    while (!(p->next) || j > i - 1) {
////        return false;
////    }
////    LNode *q = p->next;
////    p->next = q->next;
////    free(q);
////    return true;
////}
////
////int main() {
////    LNode *L;
////    InitLinkList(&L);
////    InsertList(&L, 1, 233);
////    InsertList(&L, 1, 342);
////    InsertList(&L, 3, 12314);
////    PrintList(L);
////    cout << LengthList(L) << endl;
////    DeleteList(&L, 2);
////    PrintList(L);
////    cout << LengthList(L) << endl;
////    DestroyList(&L);
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
//bool InitLinkList(LinkList *L) {
//    LNode *p = (LNode *) malloc(sizeof(LNode));
//    if (p == nullptr) {
//        cout << "Initialization fail" << endl;
//        return false;
//    }
//    (*L) = p;
//    (*L)->data = 0;
//    (*L)->next = nullptr;
//    return true;
//}
//
//void DestroyList(LinkList *L) {
//    LNode *p = nullptr;
//    while ((*L)) {
//        p = (*L);
//        (*L) = (*L)->next;
//        free(p);
//    }
//}
//
//bool EmptyList(LinkList L) {
//    LNode *p = L;
//    if (p->next == nullptr) {
//        return true;
//    } else {
//        return false;
//    }
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
//    if (!(p) || j > i - 1) {
//        return false;
//    }
//    LNode *NewLNode = (LNode *) malloc(sizeof(LNode));
//    if (NewLNode == nullptr) {
//        perror("malloc fail");
//        return false;
//    }
//    NewLNode->data = val;
//    NewLNode->next = p->next;
//    p->next = NewLNode;
//    return true;
//}
//
//
//bool PrintList(LinkList L) {
//    if (EmptyList(L)) {
//        perror("Print fail, LinkList is fail");
//        return false;
//    }
//    LNode *p = L->next;
//    while (p) {
//        cout << p->data << " ";
//        p = p->next;
//    }
//    cout << "\n";
//    return true;
//}
//
//bool ClearList(LinkList *L) {
//    if (EmptyList(*L)) {
//        return false;
//    }
//    LNode *p = (*L)->next;
//    while (p) {
//        LNode *q = p;
//        p = p->next;
//        free(q);
//    }
//    (*L)->next = nullptr;
//    return true;
//}
//
//int LengthList(LinkList L) {
//    if (EmptyList(L)) {
//        return 0;
//    }
//    LNode *p = L->next;
//    int count = 0;
//    while (p) {
//        count = count + 1;
//        p = p->next;
//    }
//    return count;
//}
//
//bool DeleteList(LinkList *L, int i) {
//    if (L == nullptr) {
//        return false;
//    }
//    if (EmptyList(*L)) {
//        return false;
//    }
//    LNode *p = (*L);
//    int j = 0;
//    while (p->next && j < i - 1) {
//        p = p->next;
//        j++;
//    }
//    while (!(p->next) || j > i - 1) {
//        return false;
//    }
//    LNode *q = p->next;
//    p->next = q->next;
//    free(q);
//    return true;
//}
//
//ElemType GetVal(LinkList L, int i) {
//    if (EmptyList(L)) {
//        return 0;
//    }
//    LNode *p = L->next;
//    int j = 0;
//    while (p && j < i - 1) {
//        p = p->next;
//        j++;
//    }
//    if (!(p) || j > i - 1) {
//        return 0;
//    }
//    return p->data;
//}
//
//bool CreateList(LinkList *L, int n) {
//    LNode *p = (LNode *) malloc(sizeof(LNode));
//    if (p == nullptr) {
//        return false;
//    }
//    (*L) = p;
//    (*L)->data = 0;
//    (*L)->next = nullptr;
//    while (n) {
//        LNode *s = (LNode *) malloc(sizeof(LNode));
//        cin >> s->data;
//        s->next = (*L)->next;
//        (*L)->next = s;
//        n--;
//    }
//    return true;
//}
//
//void CreateList_R(LinkList *L, int n) {
//    (*L) = (LNode *) malloc(sizeof(LNode));
//    (*L)->data = 0;
//    (*L)->next = nullptr;
//    LNode *r = (*L);
//    while (n) {
//        LNode *p = (LNode *) malloc(sizeof(LNode));
//        cin >> p->data;
//        p->next = nullptr;
//        p->next = p;
//        r = p;
//        n--;
//    }
//}
//
//int main() {
//    LNode *L;
//    //CreateList(&L,8);
//    //PrintList(L);
//    CreateList_R(&L, 5);
//    PrintList(L);
//    DestroyList(&L);
//    return 0;
//}


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
//bool InitLinkList(LinkList *L) {
//    LNode *p = (LNode *) malloc(sizeof(LNode));
//    if (p == nullptr) {
//        cout << "Initialization fail" << endl;
//        return false;
//    }
//    (*L) = p;
//    (*L)->data = 0;
//    (*L)->next = nullptr;
//    return true;
//}
//
//void DestroyList(LinkList *L) {
//    LNode *p = nullptr;
//    while ((*L)) {
//        p = (*L);
//        (*L) = (*L)->next;
//        free(p);
//    }
//}
//
//bool EmptyList(LinkList L) {
//    LNode *p = L;
//    if (p->next == nullptr) {
//        return true;
//    } else {
//        return false;
//    }
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
//    if (!(p) || j > i - 1) {
//        return false;
//    }
//    LNode *NewLNode = (LNode *) malloc(sizeof(LNode));
//    if (NewLNode == nullptr) {
//        perror("malloc fail");
//        return false;
//    }
//    NewLNode->data = val;
//    NewLNode->next = p->next;
//    p->next = NewLNode;
//    return true;
//}
//
//
//bool PrintList(LinkList L) {
//    if (EmptyList(L)) {
//        perror("Print fail, LinkList is fail");
//        return false;
//    }
//    LNode *p = L->next;
//    while (p) {
//        cout << p->data << " ";
//        p = p->next;
//    }
//    cout << "\n";
//    return true;
//}
//
//bool ClearList(LinkList *L) {
//    if (EmptyList(*L)) {
//        return false;
//    }
//    LNode *p = (*L)->next;
//    while (p) {
//        LNode *q = p;
//        p = p->next;
//        free(q);
//    }
//    (*L)->next = nullptr;
//    return true;
//}
//
//int LengthList(LinkList L) {
//    if (EmptyList(L)) {
//        return 0;
//    }
//    LNode *p = L->next;
//    int count = 0;
//    while (p) {
//        count = count + 1;
//        p = p->next;
//    }
//    return count;
//}
//
//bool DeleteList(LinkList *L, int i) {
//    if (L == nullptr) {
//        return false;
//    }
//    if (EmptyList(*L)) {
//        return false;
//    }
//    LNode *p = (*L);
//    int j = 0;
//    while (p->next && j < i - 1) {
//        p = p->next;
//        j++;
//    }
//    while (!(p->next) || j > i - 1) {
//        return false;
//    }
//    LNode *q = p->next;
//    p->next = q->next;
//    free(q);
//    return true;
//}
//
//ElemType GetVal(LinkList L, int i) {
//    if (EmptyList(L)) {
//        return 0;
//    }
//    LNode *p = L->next;
//    int j = 0;
//    while (p && j < i - 1) {
//        p = p->next;
//        j++;
//    }
//    if (!(p) || j > i - 1) {
//        return 0;
//    }
//    return p->data;
//}
//
//bool CreateList(LinkList *L, int n) {
//    LNode *p = (LNode *) malloc(sizeof(LNode));
//    if (p == nullptr) {
//        return false;
//    }
//    (*L) = p;
//    (*L)->data = 0;
//    (*L)->next = nullptr;
//    while (n) {
//        LNode *s = (LNode *) malloc(sizeof(LNode));
//        cin >> s->data;
//        s->next = (*L)->next;
//        (*L)->next = s;
//        n--;
//    }
//    return true;
//}
//
//void CreateList_R(LinkList *L, int n) {
//    (*L) = (LNode *) malloc(sizeof(LNode));
//    (*L)->data = 0;
//    (*L)->next = nullptr;
//    LNode *r = (*L);
//    while (n) {
//        LNode *p = (LNode *) malloc(sizeof(LNode));
//        cin >> p->data;
//        p->next = nullptr;
//        r->next = p;
//        r = p;
//        n--;
//    }
//}
//
//int main() {
//    LNode *L;
//    //CreateList(&L,8);
//    //PrintList(L);
//    CreateList_R(&L, 5);
//    PrintList(L);
//    DestroyList(&L);
//    return 0;
//}


#include <iostream>

using namespace std;

#include <cstdlib>

typedef int ElemType;

//typedef struct LNode {
//    ElemType data;
//    struct LNode *next;
//} LNode, *LinkList;

bool InitLinkList(LinkList *L) {
    LNode *p = (LNode *) malloc(sizeof(LNode));
    if (p == nullptr) {
        cout << "Initialization fail" << endl;
        return false;
    }
    (*L) = p;
    (*L)->data = 0;
    (*L)->next = nullptr;
    return true;
}

void DestroyList(LinkList *L) {
    LNode *p = nullptr;
    while ((*L)) {
        p = (*L);
        (*L) = (*L)->next;
        free(p);
    }
}

bool EmptyList(LinkList L) {
    LNode *p = L;
    if (p->next == nullptr) {
        return true;
    } else {
        return false;
    }
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
    if (!(p) || j > i - 1) {
        return false;
    }
    LNode *NewLNode = (LNode *) malloc(sizeof(LNode));
    if (NewLNode == nullptr) {
        perror("malloc fail");
        return false;
    }
    NewLNode->data = val;
    NewLNode->next = p->next;
    p->next = NewLNode;
    return true;
}


bool PrintList(LinkList L) {
    if (EmptyList(L)) {
        perror("Print fail, LinkList is fail");
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

bool ClearList(LinkList *L) {
    if (EmptyList(*L)) {
        return false;
    }
    LNode *p = (*L)->next;
    while (p) {
        LNode *q = p;
        p = p->next;
        free(q);
    }
    (*L)->next = nullptr;
    return true;
}

int LengthList(LinkList L) {
    if (EmptyList(L)) {
        return 0;
    }
    LNode *p = L->next;
    int count = 0;
    while (p) {
        count = count + 1;
        p = p->next;
    }
    return count;
}

bool DeleteList(LinkList *L, int i) {
    if (L == nullptr) {
        return false;
    }
    if (EmptyList(*L)) {
        return false;
    }
    LNode *p = (*L);
    int j = 0;
    while (p->next && j < i - 1) {
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

ElemType GetVal(LinkList L, int i) {
    if (EmptyList(L)) {
        return 0;
    }
    LNode *p = L->next;
    int j = 0;
    while (p && j < i - 1) {
        p = p->next;
        j++;
    }
    if (!(p) || j > i - 1) {
        return 0;
    }
    return p->data;
}

bool CreateList(LinkList *L, int n) {
    LNode *p = (LNode *) malloc(sizeof(LNode));
    if (p == nullptr) {
        return false;
    }
    (*L) = p;
    (*L)->data = 0;
    (*L)->next = nullptr;
    while (n) {
        LNode *s = (LNode *) malloc(sizeof(LNode));
        cin >> s->data;
        s->next = (*L)->next;
        (*L)->next = s;
        n--;
    }
    return true;
}

void CreateList_R(LinkList *L, int n) {
    (*L) = (LNode *) malloc(sizeof(LNode));
    (*L)->data = 0;
    (*L)->next = nullptr;
    LNode *r = (*L);
    while (n) {
        LNode *p = (LNode *) malloc(sizeof(LNode));
        cin >> p->data;
        p->next = nullptr;
        r->next = p;
        r = p;
        n--;
    }
}

int main() {
    LNode *L;
    //CreateList(&L,8);
    //PrintList(L);
    CreateList_R(&L, 5);
    PrintList(L);
    DestroyList(&L);
    return 0;
}