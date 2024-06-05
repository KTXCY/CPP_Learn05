//
// Created by mynam on 2024/6/5.
//

//#include <iostream>

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

//int List_length(LinkList *L) {
//    if (L) {
//        return 1;
//    } else {
//
//    }
//}


//bool Insert_List(LinkList *L, int i, ElemType val) {
//    LNode *p = (*L);
//    int j = 0;
//    if(!p){
//        LNode *NewNode = (LNode *) malloc(sizeof(LNode));
//        if (NewNode == nullptr) {
//            return false;
//        }
//    }
////    LNode *NewNode = (LNode *) malloc(sizeof(LNode));
//    if (NewNode == nullptr) {
//        return false;
//    }
//    NewNode->data = val;
//    NewNode->next = p->next;
//    p->next = NewNode;
//    return true;
//}

//
//int main() {
//    LNode *L;
//    Insert_List(&L,1,12);
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
//LNode *GetNewNode(ElemType val) {
//    LNode *p = (LNode *) malloc(sizeof(LNode));
//    if (p == nullptr) {
//        return nullptr;
//    } else {
//        p->data = val;
//        p->next = nullptr;
//        return p;
//    }
//}
//
//bool Insert_List(LinkList *L, int i, ElemType val) {
//    if (i == 1) {
//        LNode *p = GetNewNode(val);
//        p->next = (*L);
//        (*L) = p;
//        return true;
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
//    LNode *q = GetNewNode(val);
//    q->data = val;
//    q->next = p->next;
//    q->next = p;
//    return true;
//}
//
//void Print(LinkList L) {
//    LNode *p = L;
//    while (p) {
//        cout << p->data << endl;
//        p = p->next;
//    }
//}
//
//int main() {
//    LNode *L;
//    Insert_List(&L, 1, 90);
//    Print(L);
//    return 0;
//}



// 全站内容仅供学习，禁止以原文或修改形式后的任何企业使用，请准守“一般著作权”协议
// 来源:totuma.cn
//#include <stdio.h>
//#include<stdlib.h>
//typedef struct LNode {
//    int data;
//    struct LNode * next;
//} LNode, *LinkList;
//
//// 初始化链表
//bool List_Init (LinkList &pHead) {
//    pHead = NULL;
//    return true;
//}
//
//// 判断单链表是否为空
//bool List_Empty (LinkList pHead) {
//    return pHead == NULL;
//}
//
//// 获取单链表有效数据节点个数
//int List_Length (LinkList pHead)
//{
//    int count = 0;
//    for (LNode *p = pHead; p != NULL; p = p->next)
//        count++;
//    return count;
//}
//
//
//// totuma.cn
//// 创建链表，头插结果为倒叙
//LinkList List_Create(LinkList &pHead) {
//    LNode *pTemp; int x;
//    scanf("%d", &x);
//    while (x != 999) {
//        pTemp = (LNode *)malloc(sizeof(LNode));
//        pTemp->data = x;
//        pTemp->next = pHead;
//        pHead = pTemp;
//        scanf("%d", &x);
//    }
//    return pHead;
//}
//
//
//// totuma.cn
//// 按位序插入，i=1插在表头，i=length+1插在表尾
//bool List_Insert(LinkList &pHead, int i, int e) {
//    if (i < 1 || i > List_Length(pHead) + 1) return false;
//    LNode *pTemp = (LNode *)malloc(sizeof(LNode));
//    if (i == 1) { // 插入第1个结点的操作
//        pTemp->data = e;
//        pTemp->next = pHead;
//        pHead = pTemp;
//        return true;
//    }
//    LNode *p; // 指针p指向的为当前扫描到的结点
//    int j = 1; // 当前p指向的是第几个结点
//    p = pHead; // p 指向第1个结点（注意：不是头节点）
//    while (p != NULL && j < i - 1) { // 循环找到要插入位置的前驱结点
//        p = p->next;
//        j++;
//    }
//    pTemp->data = e;
//    pTemp->next = p->next;
//    p->next = pTemp;
//    return true;
//}
//
//
//// totuma.cn
//// 通过值获取结点和位序
//LNode* List_Get_Elem (LinkList pHead, int e, int &i) {
//    i = 1;
//    LNode *p = pHead;
//    while(p != NULL && p->data != e) {
//        p = p->next;
//        i = i + 1;
//    }
//    return p;
//}
//
//
//// totuma.cn
//// 按位序删除，i=1删表头，i=length删头尾
//bool List_Del (LinkList &pHead, int i) {
//    if (i < 1 || i > List_Length(pHead)) return false;
//    LNode *p = pHead; // p 指向表头
//    if (i == 1) { // 删除第一个结点
//        pHead = p->next;
//        free(p);
//        return true;
//    }
//    // 找到待删除位序的前一位结点，i==1已处理，故从j=2开始
//    for (int j = 2; j < i; j++)
//        p = p->next;
//    LNode *q = p->next; // 待删除结点
//    p->next = q->next; // p->next q q->next 跳过q
//    free(q);
//    return true;
//}
//
//
//// totuma.cn
//// 打印链表所有值
//void List_Show (LinkList pHead) {
//    LNode *node = pHead;
//    printf("链表值：");
//    do {
//        printf("%d、", node->data);
//        node = node->next;
//    } while(node != NULL);
//    printf("\n");
//}
//
//int main () {
//    LinkList pHead;
//    List_Init(pHead);
//    List_Insert(pHead,1,90);
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
//bool List_Init(LinkList *L) {
//    (*L) = nullptr;
//    return true;
//}
//
//int List_length(LinkList pHead) {
//    int count = 0;
//    for (LNode *p = pHead; p != nullptr; p = p->next) {
//        count++;
//    }
//    return count;
//}
//
///*
//LinkList List_Create(LinkList *L){
//	LNode *pTemp;
//	int x;
//	cin >> x;
//	while(x != 999){
//		pTemp = (LNode*)malloc(sizeof(LNode));
//		pTemp->data = x;
//
//	}
//
//}
//*/
//
//bool List_Insert(LinkList *pHead, int i, ElemType e) {
//    if (i < 1 || i > (List_length(*pHead) + 1)) {
//        return false;
//    }
//    LNode *pTemp = (LNode *) malloc(sizeof(LNode));
//    if (i == 1) {
//        pTemp->data = e;
//        pTemp->next = (*pHead);
//        (*pHead) = pTemp;
//        return true;
//    }
//    LNode *p;
//    int j = 1;
//    p = (*pHead);
//    while (p != nullptr && j < i - 1) {
//        p = p->next;
//        j++;
//    }
//    pTemp->data = e;
//    pTemp->next = p->next;
//    p->next = pTemp;
//    return true;
//
//}
//
//void List_Destroy(LinkList *L) {
//    LNode *p = (*L);
//    LNode *q = nullptr;
//    while (p) {
//        q = p;
//        p = p->next;
//        free(q);
//    }
//}
//
//void Print(LinkList L) {
//    while (L) {
//        cout << L->data << endl;
//        L = L->next;
//    }
//}
//
//int main() {
//    LNode *L;
//    List_Init(&L);
//    List_Insert(&L, 1, 12);
//    List_Destroy(&L);
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
//void List_Init(LinkList *L) {
//    (*L) = nullptr;
//}
//
//void List_Destroy(LinkList *L) {
//    LNode *p = (*L);
//    while (p) {
//        LNode *q = p;
//        p = p->next;
//        free(q);
//    }
//}
//
//int List_length(LinkList L) {
//    LNode *p = L;
//    int count = 0;
//    while (p) {
//        count++;
//        p = p->next;
//    }
//    return count;
//}
//
////不带头结点的单链表插入指定位置
//
//
//void List_Print(LinkList *L) {
//    LNode *p = (*L);
//    while (p) {
//        cout << p->data << " ";
//        p = p->next;
//    }
//    cout << "\n";
//
//}
//
//
//int main() {
//    LNode *L;
//    List_Init(&L);
//    List_Insert(&L, 1, 90);
//    List_Insert(&L, 1, 90);
//    List_Insert(&L, 1, 90);
//    List_Print(&L);
//    List_Destroy(&L);
//    return 0;
//}
