//
// Created by mynam on 2024/6/4.
//
//带头节点的单链表
#include <iostream>
using namespace std;
#include <cstdlib>

typedef int ElemType;

//单链表的定义
typedef struct LNode{
    ElemType  data;
    struct LNode* next;
}LNode,*LinkList;

//单链表的初始化
bool InitLinkList(LinkList *L){
    LNode *p = (LNode*)malloc(sizeof(LNode));
    if(p == nullptr){
        return false;
    }
    (*L) = p;
    (*L)->data = 0;
    (*L)->next = nullptr;
    return true;
}

//销毁单链表
void DestroyLinkList(LinkList *L){
    LNode *p = (*L);
    LNode *q = nullptr;
    while(p){
        q = p;
        p = p->next;
        free(q);
    }
}

//单链表的插入
bool InsertLinkList(LinkList *L, int i, ElemType val){
    if(L == nullptr){
        return false;
    }
    LNode *p = (*L);
    int j = 0;
    while (p && j < i -1){
        p = p->next;
        j++;
    }
    if((!p) || j > i-1){
        return false;
    }
    LNode *NewNode = (LNode*)malloc(sizeof(LNode));
    if(NewNode == nullptr){
        cout << "malloc fail" << endl;
        return false;
    }

    NewNode->data = val;
    NewNode->next = p->next;
    p->next = NewNode;
    return true;
}

//单链表的判空
bool ListEmpty(LinkList L){
    if(L->next){
        return false;
    }else{
        return true;
    }
}

//打印单链表的元素
bool Print(LinkList L){
    if(ListEmpty(L)){
        cout << "Print fail,L = empty" << endl;
        return false;
    }
    LNode *p = L->next;
    while(p){
        cout << p->data << " ";
        p = p->next;
    }
    cout << "\n";
    return true;
}

//删除单链表中的任意一个元素
bool DeletLinkList(LinkList *L, int i){
    if(L == nullptr){
        return false;
    }
    if(ListEmpty(*L)){
        cout << "Delete fail, L = empty" << endl;
        return false;
    }
    LNode *p = (*L);
    int j = 0;
    while((p->next) && j < i -1){
        p = p->next;
        j++;
    }
    if(!(p->next) || j > i-1){
        return false;
    }
    LNode *q = p->next;
    p->next = q ->next;
    free(q);
    return true;
}

//清空单链表
void ClearLinkList(LinkList *L){
    LNode *p = (*L)->next;
    LNode *q = nullptr;
    while(p){
        q = p->next;
        free(p);
        p = q;
    }
    (*L)->next = nullptr;
}

//求单链表的长度

int ListLength(LinkList L){
    if(ListEmpty(L)){
        return 0;
    }
    LNode *p;
    p = L->next;
    int i = 0;
    while(p){
        i++;
        p = p->next;
    }
    return i;
}

//单链表的取值
void GetElem(LinkList L,int i, ElemType *e){
    if(ListEmpty(L)){
        perror("L = empty");
        exit(-1);
    }

    LNode *p = (L)->next;
    int j = 0;
    while(p && j < i - 1){
        p = p->next;
        j++;
    }
    if((!p) || j > i - 1){
        perror("!p == NULL || j > i");
        exit(-1);
    }
    (*e) = p->data;
}

//单链表的查找，返回节点的地址
LNode *LocateElem_P(LinkList L, ElemType e){
    if(ListEmpty(L)){
        return nullptr;
    }
    LNode *p = L->next;
    while(p && p->data != e){
        p = p->next;
    }
    return p;
}

//单链表的查找，返回节点位置序号

int LocateElem_N(LinkList L, ElemType e){
    if(ListEmpty(L)){
        return 0;
    }
    LNode *p = L->next;
    int j = 1;
    while(p && p->data != e){
        p = p->next;
        j++;
    }
    if(p){
        return j;
    }else{
        return 0;
    }
}

//头插法
void CreateList_H(LinkList *L, int n){
    (*L) = (LNode*)malloc(sizeof(LNode));
    (*L)->data = 0;
    (*L)->next = nullptr;
    while(n){
        LNode*p = (LNode*)malloc(sizeof(LNode));
        cin >> p->data;
        p->next = (*L)->next;
        (*L)->next = p;
        n--;
    }
}

//尾插法
void CreateList_R(LinkList *L, int n){
    (*L) = (LNode*)malloc(sizeof(LNode));
    (*L)->data = 0;
    (*L)->next = nullptr;
    LNode *r = (*L);
    while(n){
        LNode *p = (LNode*)malloc(sizeof(LNode));
        cin >> p->data;
        p->next = nullptr;
        r->next = p;
        r = p;
        n--;
    }
}


int main(){
    LNode *L;
    InitLinkList(&L);
    CreateList_H(&L,6);
    Print(L);
    CreateList_R(&L,7);
    Print(L);
    DestroyLinkList(&L);
    return 0;
}
