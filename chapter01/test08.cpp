////
//// Created by mynam on 2024/6/6.
////
//
//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//
//typedef int ElemType;
//
//typedef struct ListNode {
//    int val;
//    struct ListNode *next;
//} ListNode;
//
//int getListLength(ListNode *head) {
//    int length = 0;
//    ListNode *current = head;
//    while (current) {
//        length++;
//        current = current->next;
//    }
//    return length;
//}
//
//void Inist(ListNode **head) {
//    (*head) = nullptr;
//}
//
//void InsertNodeAtIndex(ListNode **head, int index, int value) {
//    if (index < 1) {
//        cout << "Invalid index, should be greater than or equal t0 1" << endl;
//        return;
//    }
//    int length = getListLength(*head);
//    if (index > length + 1) {
//        cout << "Invalid index, should be less than or equal to " << length + 1 << endl;
//        return;
//    }
//    auto *newNode = (ListNode *) malloc(sizeof(ListNode));
//    if (!newNode) {
//        cout << "Memory allocation failed.\n" << endl;
//        return;
//    }
//    newNode->val = value;
//    newNode->next = nullptr;
//    if (!(*head) || index == 1) {
//        newNode->next = (*head);
//        *head = newNode;
//    } else {
//        ListNode *current = (*head);
//        int position = 1;
//        while (current->next && position < index - 1) {
//            current = current->next;
//            position++;
//        }
//        newNode->next = current->next;
//        current->next = newNode;
//    }
//}
//
//
//void Destroy_List(ListNode **head) {
//    ListNode *p = (*head);
//    while (p) {
//        ListNode *q = p->next;
//        free(p);
//        p = q;
//    }
//}
//
//void PrintList(ListNode *head) {
//    ListNode *p = head;
//    while (p) {
//        cout << p->val << " ";
//        p = p->next;
//    }
//}
//
//int main() {
//    ListNode *p;
//    Inist(&p);
//    InsertNodeAtIndex(&p, 1, 1);
//    InsertNodeAtIndex(&p, 1, 2);
//    InsertNodeAtIndex(&p, 1, 3);
//    InsertNodeAtIndex(&p, 1, 4);
//    Destroy_List(&p);
//    PrintList(p);
//    p = nullptr;
//    return 0;
//}