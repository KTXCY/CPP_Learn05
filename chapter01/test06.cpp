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



// 全站内容仅供学习，禁止以原文或修改形式后的任何企业使用，请准守“一般著作权”协议
//// 来源:totuma.cn
//#include <stdio.h>
//#include<stdlib.h>
//using namespace std;
//
//// 定义双链表结构
//typedef struct DNode {
//    int data; // 数据
//    struct DNode *prior, *next; // 前驱和后继指针
//} DNode, *DLinkList;
//
//// 初始化链表
//bool DList_Init(DLinkList &pHead) {
//    pHead = NULL; // 不再创建头结点
//    return true;
//}
//
//// 判断双链表是否为空（不带头节点）
//bool DList_Empty(DLinkList pHead) {
//    return pHead == NULL;
//}
//
//// 获取链表有效数据节点个数
//int DList_Length(DLinkList pHead) {
//    int count = 0;
//    DNode *p = pHead;
//    while (p != NULL) { // 当指针p不为空时，即链表不为空时
//        count++;
//        p = p->next; // 将指针p移动到下一个节点
//    }
//    return count;
//}
//
//
//// totuma.cn
//// 创建双链表，头插结果为倒序（不带头节点）
//DLinkList DList_Create(DLinkList &pHead) {
//    pHead = NULL; // 初始化链表头指针为空，表示链表为空
//    int x;
//    scanf("%d", &x);
//    DNode *pTemp; // 创建一个临时节点指针pTemp
//    while (x != 999) {
//        pTemp = (DNode *)malloc(sizeof(DNode));
//        pTemp->data = x; // 将新节点的数据域设置为x
//        pTemp->prior = NULL; // 新节点的prior为空，因为是头插法，头始终为空
//        pTemp->next = pHead; // 新节点的next指向链表当前头节点
//        if (pHead != NULL) {
//            pHead->prior = pTemp; // 设置原头节点的prior指向新节点
//        }
//        pHead = pTemp; // 更新链表头指针为新节点
//        scanf("%d", &x);
//    }
//    return pHead; // 返回创建好的双链表的头指针
//}
//
//
//// totuma.cn
//// 按位序插入，i=1插在表头，i=length+1插在表尾
//bool DList_Insert(DLinkList &pHead, int i, int e) {
//    // 检查插入位置的有效性
//    if (i < 1 || i > DList_Length(pHead) + 1) return false;
//    // 创建一个新节点pTemp并分配内存
//    DNode *pTemp = (DNode *)malloc(sizeof(DNode));
//    pTemp->data = e;
//
//    // 如果插入位置是链表头
//    if (i == 1) {
//        pTemp->next = pHead; // 新节点的next指向当前头节点
//        pTemp->prior = NULL; // 新节点的prior为空，因为是头插法
//        if (pHead != NULL) { // 如果链表不为空
//            pHead->prior = pTemp; // 设置原头节点的prior指向新节点
//        }
//        pHead = pTemp; // 更新链表头指针为新节点
//    } else { // 插入位置不在表头
//        int j = 1;
//        DNode *p = pHead; // 创建一个指针p，指向链表头节点
//        while (j < i - 1) { // 循环找到要插入位置的前驱结点
//            p = p->next;
//            j++;
//        }
//        pTemp->next = p->next; // 新节点的next指向前驱结点的下一个节点
//        pTemp->prior = p;  // 新节点的prior指向前驱结点
//        if (p->next != NULL) { // 如果前驱结点的下一个节点存在
//            p->next->prior = pTemp; // 设置前驱结点的下一个节点的prior指向新节点
//        }
//        p->next = pTemp; // 设置前驱结点的next指向新节点
//    }
//    return true;
//}
//
//
//// totuma.cn
//// 通过值获取结点和其位序
//DNode* DList_Get_Elem(DLinkList pHead, int e, int &i) {
//    i = 1;
//    DNode *p = pHead; // 创建一个指针p，指向链表头节点
//    while (p != NULL && p->data != e) { // 循环查找值为e的节点或到达链表尾部
//        p = p->next; // 移动到下一个节点
//        i++;
//    }
//    return p;// 返回找到的节点，如果没有找到则返回NULL
//}
//
//
//// totuma.cn
//// 按位序删除，i=1删表头，i=length删头尾
//bool DList_Del(DLinkList &pHead, int i) {
//    // 检查删除位置的有效性
//    if (i < 1 || i > DList_Length(pHead)) return false;
//
//    if (i == 1) { // 如果删除位置是链表头
//        DNode *q = pHead; // 创建一个指针q，指向链表头节点
//        pHead = pHead->next; // 更新链表头指针为下一个节点
//        if (pHead != NULL) { // 如果链表不为空
//            pHead->prior = NULL; // 设置新头节点的prior为空
//        }
//        free(q); // 释放原头节点的内存
//    } else { // 删除位置不在表头
//        int j = 1;
//        DNode *p = pHead; // 创建一个指针p，指向链表头节点
//        while (j < i - 1) { // 循环找到要删除位置的前驱结点
//            p = p->next; // 移动到下一个节点
//            j++; // 增加位置计数器
//        }
//        DNode *q = p->next; // 创建一个指针q，指向待删除的节点
//        p->next = q->next; // 前驱结点的next指向待删除节点的下一个节点
//        if (q->next != NULL) { // 如果待删除节点的下一个节点存在
//            q->next->prior = p; // 设置待删除节点的下一个节点的prior指向前驱结点
//        }
//        free(q); // 释放待删除节点的内存
//    }
//    return true;
//}
//
//
//// totuma.cn
//// 打印链表所有值
//void DList_Show(DLinkList pHead) {
//    DNode *node = pHead;
//    printf("链表值(从头遍历)：");
//    while (node != NULL) {
//        printf("%d、", node->data);
//        node = node->next;
//    }
//    printf("\n");
//}
//
//// 打印链表所有值，从尾到头
//// 双链表是可以走回头路的，所以可以从最后一个结点往前遍历
//void DList_Show_Back(DLinkList pHead) {
//    DNode *node = pHead;
//    while (node->next != NULL) {
//        node = node->next;
//    }
//    printf("链表值(从尾遍历)：");
//    while (node != NULL) { // 从最后一个节点开始循环，一直到链表头
//        printf("%d、", node->data);
//        node = node->prior;
//    }
//    printf("\n");
//}
//
//int main() {
//    DLinkList pHead;
//    DList_Init(pHead);
//    printf("链表判空：%s\n", DList_Empty(pHead) ? "空" : "非空");
//
//    DList_Create(pHead);
//    DList_Show(pHead);
//    DList_Show_Back(pHead);
//    printf("链表长度：%d\n\n", DList_Length(pHead));
//
//    printf("位序为1(头插)，插入：0\n");
//    DList_Insert(pHead, 1, 0);
//    DList_Show(pHead);
//    printf("链表长度：%d\n\n", DList_Length(pHead));
//
//    printf("位序为%d(尾插)，插入：99\n", DList_Length(pHead) + 1);
//    DList_Insert(pHead, DList_Length(pHead) + 1, 99);
//    DList_Show(pHead);
//    printf("链表长度：%d\n\n", DList_Length(pHead));
//
//    printf("删除位序为1(头删)\n");
//    DList_Del(pHead, 1);
//    DList_Show(pHead);
//    DList_Show_Back(pHead);
//    printf("链表长度：%d\n\n", DList_Length(pHead));
//
//    printf("删除位序为%d(尾删)\n", DList_Length(pHead));
//    DList_Del(pHead, DList_Length(pHead));
//    DList_Show(pHead);
//    DList_Show_Back(pHead);
//    printf("链表长度：%d\n\n", DList_Length(pHead));
//
//    printf("获取值为：5的结点位序\n");
//    int i = -1;
//    DNode *p5 = DList_Get_Elem(pHead, 5, i);
//    printf("值为5的结点位序为：%d\n\n", p5 != NULL ? i : -1);
//
//    printf("链表判空：%s\n", DList_Empty(pHead) ? "空" : "非空");
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
//bool List_Insert(LinkList *list, int i, ElemType val) {
//    // 检查链表指针是否为空
//    if (list == nullptr) {
//        return false;
//    }
//    LNode *current = (*list); // 使用更具描述性的变量名
//    if ((!current) || i == 1) {
//        // 内存分配和错误处理
//        LNode *newNode = (LNode *) malloc(sizeof(LNode));
//        if (newNode == nullptr) {
//            return false; // 内存分配失败处理
//        } else {
//            newNode->data = val;
//            newNode->next = current;
//
//            // 如果是插入第一个节点，更新链表头指针
//            if (i == 1) {
//                (*list) = newNode;
//            }
//            return true;
//        }
//    }
//
//    // 修正循环条件，正确处理边界情况
//    int index = 0;
//    while (current && index < i - 1) { // 应为 i - 1，且记录的是当前节点位置
//        current = current->next;
//        index++;
//    }
//
//    // 当索引超出链表当前长度时，不应该继续
//    if (current == nullptr || index < i - 1) {
//        // 对于插入位置超出链表长度的情况，进行明确的记录或处理
//        return false; // 无法插入，超出链表长度或索引无效
//    }
//
//    LNode *newNode = (LNode *) malloc(sizeof(LNode));
//    if (newNode == nullptr) {
//        return false; // 内存分配失败处理
//    }
//
//    newNode->data = val;
//    newNode->next = current->next;
//    current->next = newNode;
//
//    return true;
//}
//
//void Print(LinkList L) {
//    LNode *p = L;
//    while (p) {
//        cout << p->data << " ";
//        p = p->next;
//    }
//    cout << "\n";
//}
//
//int main() {
//    LNode *L;
//    List_Init(&L);
//    List_Insert(&L, 1, 56);
//    Print(L);
//    List_Destroy(&L);
//    return 0;
//}


///c++
//#include <iostream>
//#include <cstdlib>
//
//typedef int ElemType;
//
//// 使用更现代的C++风格定义结构体和指针
//struct LNode {
//    ElemType data;
//    LNode *next;
//};
//
//// 为了避免在头文件中使用using namespace std，使用std::cout和std::endl
//void Print(LNode *L) {
//    LNode *p = L;
//    while (p) {
//        std::cout << p->data << " ";
//        p = p->next;
//    }
//    std::cout << "\n";
//}
//
//// 初始化链表
//void List_Init(LNode **L) {
//    *L = nullptr;
//}
//
//// 销毁链表
//void List_Destroy(LNode **L) {
//    LNode *p = *L;
//    while (p) {
//        LNode *q = p;
//        p = p->next;
//        free(q); // 保持使用free，因为要兼容原代码的要求
//    }
//    *L = nullptr;
//}
//
//// 插入元素到链表
//bool List_Insert(LNode **list, int i, ElemType val) {
//    if (list == nullptr) {
//        return false;
//    }
//    LNode *current = *list;
//    if ((!current) || i == 1) {
//        LNode *newNode = (LNode *) malloc(sizeof(LNode));
//        if (newNode == nullptr) {
//            return false;
//        }
//        newNode->data = val;
//        newNode->next = current;
//        *list = newNode;
//        return true;
//    }
//
//    int index = 0;
//    while (current && index < i - 1) {
//        current = current->next;
//        index++;
//    }
//
//    if (current == nullptr || index > i - 1) {
//        return false; // 无法插入，超出链表长度或索引无效
//    }
//
//    LNode *newNode = (LNode *) malloc(sizeof(LNode));
//    if (newNode == nullptr) {
//        return false;
//    }
//
//    newNode->data = val;
//    newNode->next = current->next;
//    current->next = newNode;
//
//    return true;
//}
//
//int main() {
//    LNode *L;
//    List_Init(&L);
//    List_Insert(&L, 1, 56);
//    List_Insert(&L, 1, 56);
//    List_Insert(&L, 1, 56);
//    List_Insert(&L, 2, 3);
//    List_Insert(&L, 1, 56);
//    List_Insert(&L, 1, 56);
//    Print(L);
//    List_Destroy(&L);
//    return 0;
//}
