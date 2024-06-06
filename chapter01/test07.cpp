////
//// Created by mynam on 2024/6/5.
////
//
//
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef int ElemType;
//
//// 定义链表节点结构体
//typedef struct LNode {
//    ElemType data;
//    struct LNode *next;
//} LNode;
//
//// 初始化链表
//void List_Init(LNode **head) {
//    *head = NULL;
//}
//
//// 插入元素到链表
//bool List_Insert(LNode **head, int i, ElemType val) {
//    if (i == 1) {
//        LNode *newNode = (LNode *) malloc(sizeof(LNode));
//        if (newNode == NULL) {
//            return false;
//        }
//        newNode->data = val;
//        newNode->next = *head;
//        *head = newNode;
//        return true;
//    } else {
//        LNode *current = *head;
//        int index = 1;
//        while (current != NULL && index < i - 1) {
//            current = current->next;
//            index++;
//        }
//
//        if (current == NULL || index < i - 1) {
//            return false; // 无法插入，超出链表长度或索引无效
//        }
//
//        LNode *newNode = (LNode *) malloc(sizeof(LNode));
//        if (newNode == NULL) {
//            return false;
//        }
//
//        newNode->data = val;
//        newNode->next = current->next;
//        current->next = newNode;
//
//        return true;
//    }
//}
//
//// 打印链表
//void Print(LNode *head) {
//    LNode *p = head;
//    while (p != NULL) {
//        printf("%d ", p->data);
//        p = p->next;
//    }
//    printf("\n");
//}
//
//int main() {
//    LNode *head = NULL;
//    List_Init(&head);
//    List_Insert(&head, 1, 56);
//    List_Insert(&head, 1, 5);
//    List_Insert(&head, 2, 10);
//    List_Insert(&head,5,7);
//    Print(head);
//    return 0;
//}


//Status ListDelete_L(LinkList &L,int i, ElemType &e){
//    Lnode *p = L;
//    int j = 0;
//    Lnode * q = NULL;
//    while(p ->next && j < i-1){
//        p = p -> next;
//        ++j;
//    }
//    if(!(p->next) || j > i -1){
//        return ERROR;
//    }
//    q = p->next;
//    p->next = q->next;
//    e = q->data;
//    delete q;
//    return OK;
//}