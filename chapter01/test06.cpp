//
// Created by mynam on 2024/6/5.
//
//#include <stdio.h>
//#include <stdlib.h>
//
//// 定义链表节点结构体
//typedef struct LNode {
//    int data;
//    struct LNode *next;
//} LNode;
//
//// 初始化链表（空链表）
//void InitLinklist(LNode **pL) {
//    *pL = NULL;
//}
//
//// 尾插法插入元素
//void PushBackLinklist(LNode **pL, int data) {
//    LNode *newNode = (LNode *) malloc(sizeof(LNode));
//    if (newNode == NULL) {
//        printf("Memory allocation failed.\n");
//        return;
//    }
//    newNode->data = data;
//    newNode->next = NULL;
//
//    if (*pL == NULL) {
//        *pL = newNode;
//    } else {
//        LNode *temp = *pL;
//        while (temp->next != NULL) {
//            temp = temp->next;
//        }
//        temp->next = newNode;
//    }
//}
//
////在指定位置插入元素
//int InsertLinklist(LNode **pL, int pos, int data) {
//    // 分配新节点内存
//    LNode *newNode = (LNode *) malloc(sizeof(LNode));
//    if (newNode == NULL) {
//        printf("Memory allocation failed.\n");
//        return 0; // 表明内存分配失败
//    }
//    newNode->data = data;
//    newNode->next = NULL;
//
//    // 当链表为空时，直接将新节点设为头节点
//    if (*pL == NULL) {
//        *pL = newNode;
//    } else {
//        // 寻找插入位置
//        LNode *temp = *pL;
//        int len = 1; // 记录当前遍历到的位置
//        // 检查pos的有效性并找到插入位置
//        while (temp != NULL && len < pos) {
//            temp = temp->next;
//            len++;
//        }
//        // 如果找到位置，进行插入
//        if (temp != NULL) {
//            newNode->next = temp->next;
//            temp->next = newNode;
//        } else { // 如果pos超出链表长度，则将新节点添加到链表末尾
//            temp->next = newNode;
//        }
//    }
//    return 1; // 表明插入成功
//}
//
//// 打印链表
//void PrintLinklist(LNode *pL) {
//    LNode *temp = pL;
//    while (temp != NULL) {
//        printf("%d -> ", temp->data);
//        temp = temp->next;
//    }
//    printf("NULL\n");
//}
//
//int main() {
//    LNode *list = NULL; // 初始化为空链表
//
//    // 插入元素
//    PushBackLinklist(&list, 1);
//    PushBackLinklist(&list, 2);
//    PushBackLinklist(&list, 3);
//
//    // 打印链表
//    PrintLinklist(list);
//
//    // 清理内存
//    LNode *current = list;
//    while (current != NULL) {
//        LNode *nextNode = current->next;
//        free(current);
//        current = nextNode;
//    }
//
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
//void InitList(LNode *&L) {
//    L = nullptr;
//}
//
//bool List_Insert(LinkList *L, int i, ElemType e) {
//    if (i < 1) {
//        return false;
//    }
//    if (i == 1) {
//        LNode *s = (LNode *) malloc(sizeof(LNode));
//        s->data = e;
//        s->next = *L;
//        *L = s;
//        return true;
//    }
//    LNode *p = *L;
//    int j = 0;
//    while (p != nullptr && j < i - 1) {
//        p = p->next;
//        j++;
//    }
//    if (p == nullptr) {
//        return false;
//    }
//    LNode *s = (LNode *) malloc(sizeof(LNode));
//    s->data = e;
//    s->next = p->next;
//    p->next = s;
//    return true;
//}
//
//void List_Destroy(LinkList *L) {
//    LNode *p = *L;
//    while (p != nullptr) {
//        LNode *q = p->next;
//        free(p);
//        p = q;
//    }
//    *L = nullptr;
//}
//
//int main() {
//    LNode *L;
//    InitList(L);
//    List_Insert(&L, 1, 1);
//    List_Destroy(&L);
//    return 0;
//}



// 全站内容仅供学习，禁止以原文或修改形式后的任何企业使用，请准守“一般著作权”协议
// 来源:totuma.cn
//#include <stdio.h>
//#include<stdlib.h>
//
//typedef struct LNode {
//    int data;
//    struct LNode *next;
//} LNode, *LinkList;
//
//// 初始化链表
//bool List_Init(LinkList &pHead) {
//    pHead = NULL;
//    return true;
//}
//
//// 判断单链表是否为空
//bool List_Empty(LinkList pHead) {
//    return pHead == NULL;
//}
//
//// 获取单链表有效数据节点个数
//int List_Length(LinkList pHead) {
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
//    LNode *pTemp;
//    int x;
//    scanf("%d", &x);
//    while (x != 999) {
//        pTemp = (LNode *) malloc(sizeof(LNode));
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
/////c++
////#include <stdlib.h> // 包含malloc和free的定义
//
//bool List_Insert(LinkList &pHead, int i, int e) {
//    // 检查插入位置是否合理
//    if (i < 1 || i > List_Length(pHead) + 1) return false;
//
//    LNode *pTemp = (LNode *) malloc(sizeof(LNode));
//    // 检查malloc是否成功
//    if (pTemp == nullptr) {
//        // 内存分配失败，返回false
//        return false;
//    }
//
//    if (i == 1) { // 插入第1个结点的操作
//        pTemp->data = e;
//        pTemp->next = pHead;
//        pHead = pTemp;
//        return true;
//    }
//
//    LNode *p; // 指针p指向的为当前扫描到的结点
//    int j = 1; // 当前p指向的是第几个结点
//    p = pHead; // p 指向第1个结点（注意：不是头节点）
//    while (p != nullptr && j < i - 1) { // 循环找到要插入位置的前驱结点
//        p = p->next;
//        j++;
//    }
//
//    // 此时p应该指向插入点的前一个结点
//    pTemp->data = e;
//    pTemp->next = p->next;
//    p->next = pTemp;
//
//    return true;
//}
//
//
//// totuma.cn
//// 通过值获取结点和位序
//LNode *List_Get_Elem(LinkList pHead, int e, int &i) {
//    i = 1;
//    LNode *p = pHead;
//    while (p != NULL && p->data != e) {
//        p = p->next;
//        i = i + 1;
//    }
//    return p;
//}
//
//
//// totuma.cn
//// 按位序删除，i=1删表头，i=length删头尾
//bool List_Del(LinkList &pHead, int i) {
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
//void List_Show(LinkList pHead) {
//    LNode *node = pHead;
//    printf("链表值：");
//    do {
//        printf("%d、", node->data);
//        node = node->next;
//    } while (node != NULL);
//    printf("\n");
//}
//
//int main() {
//    LinkList pHead;
//    List_Init(pHead);
//    printf("链表判空：%s\n", List_Empty(pHead) ? "空" : "非空");
//    List_Create(pHead);
//    List_Show(pHead);
//    printf("链表长度：%d\n\n", List_Length(pHead));
//
//    printf("位序为1(头插)，插入：0\n");
//    List_Insert(pHead, 1, 0);
//    List_Show(pHead);
//    printf("链表长度：%d\n\n", List_Length(pHead));
//
//    printf("位序为%d(尾插)，插入：99\n", List_Length(pHead) + 1);
//    List_Insert(pHead, List_Length(pHead) + 1, 99);
//    List_Show(pHead);
//    printf("链表长度：%d\n\n", List_Length(pHead));
//
//    printf("删除位序为1(头删)\n");
//    List_Del(pHead, 1);
//    List_Show(pHead);
//    printf("链表长度：%d\n\n", List_Length(pHead));
//
//    printf("删除位序为%d(尾插)\n", List_Length(pHead));
//    List_Del(pHead, List_Length(pHead));
//    List_Show(pHead);
//    printf("链表长度：%d\n\n", List_Length(pHead));
//
//    printf("获取值为：5的结点位序\n");
//    int i = -1; // -1 为未找到
//    LNode *p5 = List_Get_Elem(pHead, 5, i);
//    printf("值为5的结点位序为：%d\n\n", i);
//
//    printf("链表判空：%s\n", List_Empty(pHead) ? "空" : "非空");
//    return 0;
//}
