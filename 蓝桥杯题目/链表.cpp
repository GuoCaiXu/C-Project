# include <iostream>

using namespace std;

//定义一个链表
struct ListNode {
	int val;
	ListNode* next;
};

//创建链表
void greatList(ListNode* pHead) {
	ListNode* p = pHead;   //创建一个过渡链表
	for (int i = 1; i <= 10; i++) {
		ListNode* newHead = new ListNode;   //创建一个新链表
		newHead->val = i;                   //为新链表赋值
		newHead->next = NULL;               //新链表下一个链表为空
		p->next = newHead;                  //将新链表的地址给 p 
		p = newHead;                        //再将p 与新链表共用一块地址
	}
}

//打印链表
void ShowList(ListNode* head) {
	ListNode* p = head;
	while (p != NULL) {
		cout << p->val << " ";
		p = p->next;
	}
}

int main() {

	ListNode* head = NULL;  //创建一个链表为空
	head = new ListNode;    //为头节点创建内存
	head->val = 0;          //赋值为 0
	head->next = NULL;      //下一个链表为空
	greatList(head);        //创建链表函数
	ShowList(head);         //打印链表函数

	return 0;
}