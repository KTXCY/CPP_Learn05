//
// Created by mynam on 2024/6/2.
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
//int main() {
//    LNode *L;
//    InitList_L(&L);
//    ListInsert_L(&L, 1, 12);
//    ListInsert_L(&L, 1, 3);
//    ListInsert_L(&L, 1, 4);
//    ListInsert_L(&L, 1, 8);
//    ListInsert_L(&L, 1, 9);
//    ListInsert_L(&L, 1, 8);
//    ListInsert_L(&L, 1, 8);
//    PrintList_L(L);
//    DeleteList(&L, 3);
//    PrintList_L(L);
//    DestroyList_L(&L);
//    return 0;
//}

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
//int main() {
//    LNode *L;
//    InitList_L(&L);
//    ListInsert_L(&L, 1, 12);
//    ListInsert_L(&L, 1, 3);
//    ListInsert_L(&L, 1, 4);
//    ListInsert_L(&L, 1, 8);
//    ListInsert_L(&L, 1, 9);
//    ListInsert_L(&L, 1, 8);
//    ListInsert_L(&L, 1, 8);
//    PrintList_L(L);
//    DeleteList(&L, 3);
//    PrintList_L(L);
//    DestroyList_L(&L);
//    return 0;
//}

#include <iostream>
#include <cstdlib>

using namespace std;

typedef int ElemType;

//typedef struct LNode {
//    ElemType data;
//    struct LNode *next;
//} LNode, *LinkList;

void InitList_L(LinkList *L) {
    *L = (LNode *) malloc(sizeof(LNode));
    (*L)->next = nullptr;
    (*L)->data = 0;
}

void DestroyList_L(LinkList *L) {
    LNode *p;
    LNode *q = *L;
    while (q) {
        p = q;
        q = q->next;
        free(p);
    }
}

bool ListInsert_L(LinkList *L, int i, ElemType val) {
    LNode *p = *L;
    int j = 0;
    while (p && j < i - 1) {
        p = p->next;
        j++;
    }
    if (!p || j > i - 1) {
        return false;
    }
    LNode *s = (LNode *) malloc(sizeof(LNode));
    s->data = val;
    s->next = p->next;
    p->next = s;
    return true;
}

bool DeleteList(LinkList *L, int i) {
    LNode *p = (*L);
    int j = 0;
    while (p->next && j < i - 1) {
        p = p->next;
        j++;
    }
    if (!(p->next) || j > i - 1) {
        return false;
    }
    LNode *q = p->next;
    p->next = q->next;
    free(q);
    return true;
}

void PrintList_L(LinkList L) {
    LNode *p = L->next;
    while (p) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int ListEmpty(LinkList L) {
    if (L->next) {
        return 0;
    } else {
        return 1;
    }
}

void ClearList_L(LinkList L) {
    LNode *p = L->next;
    LNode *q = nullptr;
    while (p) {
        q = p->next;
        delete p;
        p = q;
    }
    L->next = nullptr;
}

int ListLength_L(LinkList L) {
    LNode *p = L;
    p = p->next;
    int i = 0;
    while (p) {
        i++;
        p = p->next;
    }
    return i;
}

bool GetElem_L(LinkList L, int i, ElemType &e){
    LNode *p = L->next;
    int j = 1;
    while

}

int main() {
    LNode *L;
    InitList_L(&L);
    int a = ListEmpty(L);
    cout << a << endl;
    PrintList_L(L);
    DestroyList_L(&L);
    return 0;
}

